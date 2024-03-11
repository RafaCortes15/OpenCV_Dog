void servoOut(){
  
  FL_coxa.write(FL_gamma);
  FL_femur.write(FL_alfa);
  FL_tibia.write(map(FL_beta, 0, 180, 180, 0));

  BL_coxa.write(BL_gamma);
  BL_femur.write(BL_alfa);
  BL_tibia.write(map(BL_beta, 0, 180, 180, 0));

  FR_coxa.write(map(FR_gamma, 0, 180, 180, 0));
  FR_femur.write(map(FR_alfa, 0, 180, 180, 0));
  FR_tibia.write(FR_beta);

  BR_coxa.write(map(BR_gamma, 0, 180, 180, 0));
  BR_femur.write(map(BR_alfa, 0, 180, 180, 0));
  BR_tibia.write(BR_beta);

}


void servoInit(){
  FR_coxa.attach(2);
  FR_femur.attach(3);
  FR_tibia.attach(4);

  FL_coxa.attach(5);
  FL_femur.attach(6);
  FL_tibia.attach(7);

  BR_coxa.attach(8);
  BR_femur.attach(9);
  BR_tibia.attach(10);

  BL_coxa.attach(11);
  BL_femur.attach(12);
  BL_tibia.attach(13);
}