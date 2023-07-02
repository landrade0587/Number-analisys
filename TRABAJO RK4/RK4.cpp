// TRABAJO DE PROGRAMACION
// Metodo de RK4
// LUis Andrade

#include <iostream.h>
#include <conio.h>
#include <math.h>

double f(double T)
{return ((0.000925925)*(((0.000000045)*(pow(279,4)-pow(T,4)))+((30)*(297-T))));}
void main(void)
{
double a=0,To=473,h=1,Tf,t,k1,k2,k3,k4,n=180;

cout<<"Tabla de Datos         h= ";
cout<<""<<h<<endl<<endl;
cout<<"t(seg)\t\tT(�Kelvin)"<<endl;
cout<<a<<"\t\t"<<To<<endl;

for(t=a;t<n;t=t+h)
{
k1=h*f(To);
k2=h*f(To+(k1/2));
k3=h*f(To+(k2/2));
k4=h*f(To+k3);
Tf=To+((k1+(2*k2)+(2*k3)+k4)/6);
To=Tf;
cout<<(t+1)<<"\t\t"<<Tf<<endl;
}
cout<<endl<<"Elaborado por Luis Andrade";
getch();
}