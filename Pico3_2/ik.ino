

double HipoXY(double X,double Y){
  double hipo = sqrt(pow(X,2) + pow(Y,2));
  return hipo;
}

double LineaA(double d_Z, double h_XY, double cox){
  double linea_a = sqrt(  pow(d_Z,2) + pow(h_XY - cox,2) );
  return linea_a;
}

double Gamma(double Y, double X){
  double gam = atan(Y/X) * RAD_TO_DEG;
  return gam;
}

double Alfa(double d_Z, double l_A, double tibia, double femur){
  double alf1 = acos(d_Z/l_A) * RAD_TO_DEG;
  double alf2 = acos(  (pow(tibia,2)-pow(femur,2)-pow(l_A,2))   /   (-2*femur*l_A)  ) * RAD_TO_DEG;
  double alf = alf1 + alf2;
  return alf;
}

double Beta(double l_A, double tibia, double femur){
  double beta = acos(  (pow(l_A,2)-pow(tibia,2)-pow(femur,2)  ) / (-2*tibia*femur)   ) * RAD_TO_DEG;
  return beta;
}