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

void Euler(double & x0, double & v0, double h=0.01)
{  x0=x0+h*velocidad(x0, v0); 

  v0=v0+h*aceleracion( x0, v0);
}


int main(void)
{

  double x0=1;
  double v0=0;
  double h=0.01;
  double n=0;
  for(int i=0; i<1000; i++){
  Euler(x0, v0, h);
  std::cout<<n<<" "<<x0<<" "<<v0<<std::endl;
  n=h+n;
  }
  return 0;
}


