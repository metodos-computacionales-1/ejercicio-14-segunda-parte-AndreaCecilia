#include <iostream>
#include <cmath>

// Defino las constantes del sistema
const double k=50.0;
const double lambda = 1;
const double m = 2;


double velocidad(double x0, double v0){
  return v0;
}
double aceleracion(double x0, double v0){
  return -k*pow(x0,lambda)/m;
}

//const double DeltaT = 0.01;
int main(void)
{

  //const double T_init=0;
  //const double T_final=17.0;
  //double x=1;
  //double v=0;
  
  return 0;
}


