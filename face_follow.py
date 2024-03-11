

"""
import serial
import time

# Conecta al puerto serie del Arduino (cambia el puerto COMX al que corresponda)
puerto_serie = serial.Serial('COMX', 9600)  # Cambia 'COMX' al puerto correcto
time.sleep(2)  # Espera a que se establezca la conexión

# Variables a enviar al Arduino
variable1 = 123
variable2 = 456

# Envía las variables al Arduino
puerto_serie.write(bytes(str(variable1) + ',' + str(variable2) + '\n', 'utf-8'))

# Cierra el puerto serie
puerto_serie.close()


"""
import cv2
import mediapipe as mp
import RPi.GPIO as GPIO
import time

mp_face_detection = mp.solutions.face_detection
mp_face_mesh = mp.solutions.face_mesh
mp_drawing = mp.solutions.drawing_utils

cap = cv2.VideoCapture(0)
cap.set(3, 320)  # set Width  160 - 320 - 640
cap.set(4, 240)  # set Height  120 - 240 - 480

GPIO.setmode(GPIO.BCM)
GPIO.setup(22, GPIO.OUT)  # Pin GPIO 17
GPIO.setup(23, GPIO.OUT)  # Pin GPIO 18
GPIO.setup(27, GPIO.OUT)  # Pin GPIO 19

printed_flag = {
    'A': False,
    'B': False,
    'C': False
}

# Inicializar FaceDetection y FaceMesh fuera del bucle
with mp_face_detection.FaceDetection(min_detection_confidence=0.5) as face_detection, \
        mp_face_mesh.FaceMesh(min_detection_confidence=0.5, min_tracking_confidence=0.5) as face_mesh:

    while cap.isOpened():
        success, image = cap.read()
        image = cv2.flip(image, -1)
        if not success:
            print("No se pudo leer el fotograma.")
            break

        image_rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

        results = face_detection.process(image_rgb)

        if results.detections:
            for detection in results.detections:
                mp_drawing.draw_detection(image, detection)

                # Get nose landmark
                nose_landmark = None
                face_landmarks = face_mesh.process(image_rgb).multi_face_landmarks
                if face_landmarks:
                    for face_landmark in face_landmarks:
                        # Using landmark index for nose
                        nose_landmark = face_landmark.landmark[5]  # Index 5 represents the nose tip

                        if nose_landmark:
                            nose_x, _ = int(nose_landmark.x * image.shape[1]), int(nose_landmark.y * image.shape[0])
                            cv2.circle(image, (nose_x, _), 5, (0, 0, 255), -1)

                            # Get the center of the screen
                            height, width, _ = image.shape
                            center_x = width // 2

                            # Calculate distance in X-axis
                            distance_x = nose_x - center_x

                            if distance_x > 70 and not printed_flag['B']:
                                GPIO.output(22, GPIO.HIGH)
                                GPIO.output(23, GPIO.LOW)
                                GPIO.output(27, GPIO.LOW)
                                printed_flag['B'] = True
                                printed_flag['A'] = False
                                printed_flag['C'] = False

                            elif distance_x < -70 and not printed_flag['C']:
                                GPIO.output(22, GPIO.LOW)
                                GPIO.output(23, GPIO.LOW)
                                GPIO.output(27, GPIO.HIGH)
                                printed_flag['C'] = True
                                printed_flag['A'] = False
                                printed_flag['B'] = False

                            elif -70 <= distance_x <= 70 and not printed_flag['A']:
                                GPIO.output(22, GPIO.LOW)
                                GPIO.output(23, GPIO.HIGH)
                                GPIO.output(27, GPIO.LOW)
                                printed_flag['A'] = True
                                printed_flag['B'] = False
                                printed_flag['C'] = False

                            break  # Break after first face landmark found

        cv2.imshow('Reconocimiento Facial', image)
        if cv2.waitKey(5) & 0xFF == 27:
            break

    GPIO.cleanup()
    cap.release()
    cv2.destroyAllWindows()



