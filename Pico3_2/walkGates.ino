
void adelante1(){
   if (contador >= 0 && contador < limiteSuperior/4*1) { // 0  -20
    FL_ejeX = 87.72;  // 87.72
    FL_ejeY = 0;
    FL_desfaceZ = map(contador, 0, limiteSuperior/4*1, 0, -tras_Z);
  }

  if (contador >= limiteSuperior/4*1 && contador < limiteSuperior/4*2) { 
    FL_ejeX = map(contador, limiteSuperior/4*1, limiteSuperior/4*2, 87.72, 87.72-tras_X);
    FL_ejeY = 0;
    FL_desfaceZ = map(contador, limiteSuperior/4*1, limiteSuperior/4*2, 0-tras_Z, 0);
  }
  
  if (contador >= limiteSuperior/4*2 && contador < limiteSuperior/4*3) { 
    FL_ejeX = map(contador, limiteSuperior/4*2, limiteSuperior/4*3, 87.72-tras_X, 87.72);
    FL_ejeY = 0;
    FL_desfaceZ = map(contador, limiteSuperior/4*2, limiteSuperior/4*3, 0, 0+tras_Z);
  }

  if (contador >= limiteSuperior/4*3 && contador < limiteSuperior) { 
    FL_ejeX = 87.72;
    FL_ejeY = 0;
    FL_desfaceZ = map(contador, limiteSuperior/4*3, limiteSuperior, 0+tras_Z, 0);
  }
}


void adelante2(){

  if (contador >= 0 && contador < limiteSuperior/4*1) { 
    BL_ejeX = map(contador, 0, limiteSuperior/4*1, 87.72-tras_X, 87.72);
    BL_ejeY = 0;
    BL_desfaceZ = map(contador, 0, limiteSuperior/4*1, 0, 0+tras_Z);
  }

  if (contador >= limiteSuperior/4*1 && contador < limiteSuperior/4*2) { 
    BL_ejeX = 87.72;
    BL_ejeY = 0;
    BL_desfaceZ = map(contador, limiteSuperior/4*1, limiteSuperior/4*2, 0+tras_Z, 0);
  }
  
   if (contador >= limiteSuperior/4*2 && contador < limiteSuperior/4*3) { // 0  -20
    BL_ejeX = 87.72;  // 87.72
    BL_ejeY = 0;
    BL_desfaceZ = map(contador, limiteSuperior/4*2, limiteSuperior/4*3, 0, -tras_Z);
  }

  if (contador >= limiteSuperior/4*3 && contador < limiteSuperior) { 
    BL_ejeX = map(contador, limiteSuperior/4*3, limiteSuperior, 87.72, 87.72-tras_X);
    BL_ejeY = 0;
    BL_desfaceZ = map(contador, limiteSuperior/4*3, limiteSuperior, 0-tras_Z, 0);
  }
  
}

void adelante3(){

  if (contador >= 0 && contador < limiteSuperior/4*1) { 
    FR_ejeX = map(contador, 0, limiteSuperior/4*1, 87.72-tras_X, 87.72);
    FR_ejeY = 0;
    FR_desfaceZ = map(contador, 0, limiteSuperior/4*1, 0, 0+tras_Z);
  }

  if (contador >= limiteSuperior/4*1 && contador < limiteSuperior/4*2) { 
    FR_ejeX = 87.72;
    FR_ejeY = 0;
    FR_desfaceZ = map(contador, limiteSuperior/4*1, limiteSuperior/4*2, 0+tras_Z, 0);
  }
  
   if (contador >= limiteSuperior/4*2 && contador < limiteSuperior/4*3) { // 0  -20
    FR_ejeX = 87.72;  // 87.72
    FR_ejeY = 0;
    FR_desfaceZ = map(contador, limiteSuperior/4*2, limiteSuperior/4*3, 0, -tras_Z);
  }

  if (contador >= limiteSuperior/4*3 && contador < limiteSuperior) { 
    FR_ejeX = map(contador, limiteSuperior/4*3, limiteSuperior, 87.72, 87.72-tras_X);
    FR_ejeY = 0;
    FR_desfaceZ = map(contador, limiteSuperior/4*3, limiteSuperior, 0-tras_Z, 0);
  }
  
}

void adelante4(){
   if (contador >= 0 && contador < limiteSuperior/4*1) { // 0  -20
    BR_ejeX = 87.72;  // 87.72
    BR_ejeY = 0;
    BR_desfaceZ = map(contador, 0, limiteSuperior/4*1, 0, -tras_Z);
  }

  if (contador >= limiteSuperior/4*1 && contador < limiteSuperior/4*2) { 
    BR_ejeX = map(contador, limiteSuperior/4*1, limiteSuperior/4*2, 87.72, 87.72-tras_X);
    BR_ejeY = 0;
    BR_desfaceZ = map(contador, limiteSuperior/4*1, limiteSuperior/4*2, 0-tras_Z, 0);
  }
  
  if (contador >= limiteSuperior/4*2 && contador < limiteSuperior/4*3) { 
    BR_ejeX = map(contador, limiteSuperior/4*2, limiteSuperior/4*3, 87.72-tras_X, 87.72);
    BR_ejeY = 0;
    BR_desfaceZ = map(contador, limiteSuperior/4*2, limiteSuperior/4*3, 0, 0+tras_Z);
  }

  if (contador >= limiteSuperior/4*3 && contador < limiteSuperior) { 
    BR_ejeX = 87.72;
    BR_ejeY = 0;
    BR_desfaceZ = map(contador, limiteSuperior/4*3, limiteSuperior, 0+tras_Z, 0);
  }
}