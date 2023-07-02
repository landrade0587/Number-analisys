/*
	Este programa resuelve ecuaciones diferrenciales ordinales.
   utilizando  los metodos de runge-kutta(RK)
   en este caso  el metodo de diferencias finitas
   creado el dia jueves 11 de mayo  del 2009
   Elaborado por: Luis Alberto Andrade Obeso.

*/
#include<iostream.h>
#include <math.h>
#include <conio.h>
#include <fstream.h>
#include <stdlib.h>
#define e 2.7182818

double R(double x)
{return ((exp(-2*x)-exp(2*x))*((5)/(exp(-2)-exp(2)));}

void main(void)
{
	double h,yi,a,b,n,i=0,x;

    a=0;
    b=1;
    n=4;

   cout<<"\n\n\t Este programa resuelve :";
   cout<<"\n\t Ecuaciones Diferrenciales Ordinales";
   cout<<"\n\t Utilizando el metodo de diferencias finitas";
   cout<<"\n\n\t Tabla de datos. ";
   cout<<"\n\t_____________________________________________";
   cout<<"\n\t i		Xi		Yi(numerica)  		Yi(Analitica) ";
   cout<<"\n\t_____________________________________________";

   x=a;
   h=(b-a)/n;

   for(i=0; i<=4; i=i+1)
   {


           yi=R(x);
           x=h;
           cout<<"\n\t "<<i;
           cout<<"\t"<<h;
           cout<<"\t\t" <<yi;
   }



   cout<<"\n\n\n\t Este programa fue elaborado por:";
   cout<<"\n\t Luis Alberto Andrade Obeso.";
   cout<<"\n\t Creado el 11 de mayo del 2009.";

getch();

}

