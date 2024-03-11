#ifndef PICO_H
#define PICO_H

#include <Servo.h>

Servo FR_coxa;
Servo FR_femur;
Servo FR_tibia;

Servo FL_coxa;
Servo FL_femur;
Servo FL_tibia;

Servo BR_coxa;
Servo BR_femur;
Servo BR_tibia;

Servo BL_coxa;
Servo BL_femur;
Servo BL_tibia;
//--------------------------------

double FL_ejeX = 87.72;  // 87.72
double FL_ejeY = 0;
double FL_desfaceZ = 0;

double BL_ejeX = 87.72;  // 87.72
double BL_ejeY = 0;
double BL_desfaceZ = 0;

double FR_ejeX = 87.72;  // 87.72
double FR_ejeY = 0;
double FR_desfaceZ = 0;

double BR_ejeX = 87.72;  // 87.72
double BR_ejeY = 0;
double BR_desfaceZ = 0;

double ejeZ = 0;
//--------------------------------

double FL_gamma, FL_alfa, FL_beta, FL_hipoXY, FL_lineaAlfa;
double BL_gamma, BL_alfa, BL_beta, BL_hipoXY, BL_lineaAlfa;
double FR_gamma, FR_alfa, FR_beta, FR_hipoXY, FR_lineaAlfa;
double BR_gamma, BR_alfa, BR_beta, BR_hipoXY, BR_lineaAlfa;

#define COXA 14
#define FEMUR 52.5
#define TIBIA 57

//--------------------------------
const int limiteSuperior = 100;
const int limiteInferior = 0;
int contador = 0;
bool aumentando = true;
bool cambioSolicitado = false;
int intervalo = 300;       //<-- VELOCIDAD 
unsigned long tiempoAnterior = 0;
//--------------------------------

byte tras_Z = 20;
byte tras_X = 20;

#endif  // PICO_H