#include <iostream>
#include <cmath>

// Defino las constantes del sistema
const double k=50.0;
const double lambda = 1;
const double m = 2;
const double gama = 0.3;

double velocidad(double x0, double v0){
  return v0;
}
double aceleracion(double x0, double v0, int i=0){
  if(i==0){  return -k*pow(x0,lambda)/m;}
  else{  return -(k*pow(x0,lambda)+gama*v0)/m;}
}

void Euler(double & x0, double & v0, double h=0.01)
{  x0=x0+h*velocidad(x0, v0); 

  v0=v0+h*aceleracion( x0, v0);
}

void Runge(double & x0, double & v0, double h=0.01)
{
  double k10, k11, k20, k21, k30, k31, k40, k41;
  k10 = h*velocidad(x0, v0);
  k11 = h*aceleracion( x0,  v0);
  k20 = h*velocidad(x0 + k10/2, v0 + k11/2);
  k21 = h*aceleracion(x0 + k10/2, v0 + k11/2);
  k30 = h*velocidad(x0 + k20/2, v0 + k21/2);
  k31 = h*aceleracion(x0 + k20/2, v0 + k21/2);
  k40 = h*velocidad(x0 + k30, v0 + k31);
  k41 = h*aceleracion(x0 + k30, v0 + k31);

  x0 = x0 + (1.0/6.0)*(k10 + 2*k20 + 2*k30 + k40);
  v0 = v0 + (1.0/6.0)*(k11 + 2*k21 + 2*k31 + k41);
}

int main(void)
{
  int N;
  std::cout<<"Introduce 0 si Euler y 1 si Runge: ";
  std::cin>>N;
 //Si N es 0 se realiza Euler, si es 1 se da Runge
  double x0=1;
  double v0=0;
  double h=0.01;
  double n=0;
  for(int i=0; i<1000; i++){

  std::cout<<n<<" "<<x0<<" "<<v0<<std::endl;
  if(N==0){Euler(x0, v0, h);}
  else{  Runge(x0, v0, h);}
  n=h+n;
  }
  return 0;
}
