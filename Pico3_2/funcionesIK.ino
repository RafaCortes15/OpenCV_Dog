void FL() {

  FL_hipoXY = HipoXY(FL_ejeX, FL_ejeY);
  FL_lineaAlfa = LineaA(FL_desfaceZ, FL_hipoXY, COXA);

  FL_gamma = Gamma(FL_ejeY, FL_ejeX) + 90;
  FL_alfa = Alfa(FL_desfaceZ, FL_lineaAlfa, TIBIA, FEMUR) - 90 + 39.68;
  FL_beta = Beta(FL_lineaAlfa, TIBIA, FEMUR) + 5.47;
}

void FR() {
  FR_hipoXY = HipoXY(FR_ejeX, FR_ejeY);
  FR_lineaAlfa = LineaA(FR_desfaceZ, FR_hipoXY, COXA);

  FR_gamma = Gamma(FR_ejeY, FR_ejeX) + 90;
  FR_alfa = Alfa(FR_desfaceZ, FR_lineaAlfa, TIBIA, FEMUR) - 90 + 39.68;
  FR_beta = Beta(FR_lineaAlfa, TIBIA, FEMUR) + 5.47;
}

void BL() {
  BL_hipoXY = HipoXY(BL_ejeX, BL_ejeY);
  BL_lineaAlfa = LineaA(BL_desfaceZ, BL_hipoXY, COXA);

  BL_gamma = Gamma(BL_ejeY, BL_ejeX) + 90;
  BL_alfa = Alfa(BL_desfaceZ, BL_lineaAlfa, TIBIA, FEMUR) - 90 + 39.68;
  BL_beta = Beta(BL_lineaAlfa, TIBIA, FEMUR) + 5.47;
}

void BR() {
  BR_hipoXY = HipoXY(BR_ejeX, BR_ejeY);
  BR_lineaAlfa = LineaA(BR_desfaceZ, BR_hipoXY, COXA);

  BR_gamma = Gamma(BR_ejeY, BR_ejeX) + 90;
  BR_alfa = Alfa(BR_desfaceZ, BR_lineaAlfa, TIBIA, FEMUR) - 90 + 39.68;
  BR_beta = Beta(BR_lineaAlfa, TIBIA, FEMUR) + 5.47;
}