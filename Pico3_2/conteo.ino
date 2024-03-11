void conteo(){
    if (Serial.available() > 0) {
    char caracter = Serial.read();

    // Cambia la dirección solicitando un cambio al recibir 'A' o 'B'
    if (caracter == 'A' && aumentando) {
      cambioSolicitado = true;
    } else if (caracter == 'B' && !aumentando) {
      cambioSolicitado = true;
    }
  }

  unsigned long tiempoActual = millis(); 

  if (tiempoActual - tiempoAnterior >= intervalo) {
    tiempoAnterior = tiempoActual;

    if (cambioSolicitado) {
      aumentando = !aumentando; 
      cambioSolicitado = false; 

      if (aumentando) {
        contador = (contador > limiteSuperior) ? limiteSuperior : contador;
      } else {
        contador = (contador < limiteInferior) ? limiteInferior : contador;
      }
    }


    if (aumentando) {
      contador++;
      if (contador > limiteSuperior) {
        contador = limiteInferior;
      }
    } else {
      contador--;
      if (contador < limiteInferior) {
        contador = limiteSuperior;
      }
    }

    Serial.println(contador);
  }
}