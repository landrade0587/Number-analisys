/*
	Este programa resuelve ecuaciones diferenciales ordinales.
   en este caso solucionaremos una ecuacion diferencial ordinal
   de segundo orden tranformandola en una ecuacion diferencial
   de primer orden  utilizando  el metodo de runge-kutta RK4
   creado el dia viernes 08 de mayo del 2009
   Elaborado por: Luis Alberto Andrade Obeso.

*/

#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <fstream.h>

#define B1 0.1
#define B2 0.1
#define K1 1
#define K2 1
#define K3 1
#define M1 1
#define M2 1
#define M3 1
#define F1 1
#define F3 0

double c(double x,double y,double z,double r,double s,double t,double u)
{return(z);}
double d(double x,double y,double z,double r,double s,double t,double u)
{return((1/M1)*(-(B1*z)-(K1*y)+(B1*s)+(K2*r)+F1));}
double e(double x,double y,double z,double r,double s,double t,double u)
{return(s);}
double f(double x,double y,double z,double r,double s,double t,double u)
{return((1/M2)*((B1*z)+(K1*y)-(B1*s)-((K1+K2)*r)+(K2*t)));}
double g(double x,double y,double z,double r,double s,double t,double u)
{return(u);}
double k(double x,double y,double z,double r,double s,double t,double u)
{return((1/M3)*((K2*r)-(B2*u)-((K2+K3)*t)+F3));}

void menu(void)
{cout<<"\n 1. Iniciar el programa"<<endl;
 cout<<" 2. Salir del programa"<<endl;}

void main(void)
{int opc;
double n,a,b,h,xo,xi,k1,k2,k3,k4,l1,l2,l3,l4,m1,m2,m3,m4,n1,n2,n3,n4,o1,o2,o3,o4,p1,p2,p3,p4,yo,yi,yk4,zo,zi,zk4,ro,ri,rk4,so,si,sk4,to,ti,tk4,uo,ui,uk4;
system("color 09");gotoxy(22,2);cout<<"Metodo de Runge-Kutta RK4"<<endl;
menu();
cout<<"\n Seleccione una opcion:";cin>>opc;clrscr();

while(opc!=2)
{if(opc==1)
 {
  h=0.1;
  xo=0;
  yo=0;
  zo=0;
  ro=0;
  so=0;
  to=0;
  uo=0;
  a=0;
  b=30;
  cout<<"\n\n\t Este programa resuelve :";
  cout<<"\n\t Ecuaciones Diferenciales Ordinales";
  cout<<"\n\t Utilizando el metodo de RK4.";
  cout<<"\n\n El paso h es: "<<h;
  cout<<"\n el valor inicial de xo es: "<<xo;
  cout<<"\n el valor inicial de yo es: "<<yo;
  cout<<"\n el valor inicial de zo es: "<<zo;
  cout<<"\n el valor inicial de ro es: "<<ro;
  cout<<"\n el valor inicial de so es: "<<so;
  cout<<"\n el valor inicial de to es: "<<to;
  cout<<"\n el valor inicial de uo es: "<<uo;
  cout<<"\n El valor del tiempo inicial es: "<<a;
  cout<<"\n El valor del tiempo final es: "<<b;
  
  n=(b-a)/h;
  yi=yo;
  zi=zo;
  ri=ro;
  si=so;
  ti=to;
  ui=uo;

  cout<<"\n\n\t\t\t Tabla de datos. ";
  cout<<"\n_____________________________________________________________________________"<<endl;
  cout<<"i"<<'\t'<<"xi"<<'\t'<<"yi"<<'\t'<<'\t'<<'\t'<<"zi"<<'\t'<<'\t'<<'\t'<<"ri"<<'\n';
  cout<<"i"<<'\t'<<"xi"<<'\t'<<"si"<<'\t'<<'\t'<<'\t'<<"ti"<<'\t'<<'\t'<<'\t'<<"ui"<<'\n';
  for(int i=0;i<=n;i++)
  {xi=xo+i*h;
   k1=h*c(xi,yi,zi,ri,si,ti,ui);
   l1=h*d(xi,yi,zi,ri,si,ti,ui);
   m1=h*e(xi,yi,zi,ri,si,ti,ui);
   n1=h*f(xi,yi,zi,ri,si,ti,ui);
   o1=h*g(xi,yi,zi,ri,si,ti,ui);
   p1=h*k(xi,yi,zi,ri,si,ti,ui);
   k2=h*c(xi+0.5*h,yi+0.5*k1,zi+0.5*l1,ri+0.5*m1,si+0.5*n1,ti+0.5*o1,ui+0.5*p1);
   l2=h*d(xi+0.5*h,yi+0.5*k1,zi+0.5*l1,ri+0.5*m1,si+0.5*n1,ti+0.5*o1,ui+0.5*p1);
   m2=h*e(xi+0.5*h,yi+0.5*k1,zi+0.5*l1,ri+0.5*m1,si+0.5*n1,ti+0.5*o1,ui+0.5*p1);
   n2=h*f(xi+0.5*h,yi+0.5*k1,zi+0.5*l1,ri+0.5*m1,si+0.5*n1,ti+0.5*o1,ui+0.5*p1);
   o2=h*g(xi+0.5*h,yi+0.5*k1,zi+0.5*l1,ri+0.5*m1,si+0.5*n1,ti+0.5*o1,ui+0.5*p1);
   p2=h*k(xi+0.5*h,yi+0.5*k1,zi+0.5*l1,ri+0.5*m1,si+0.5*n1,ti+0.5*o1,ui+0.5*p1);
   k3=h*c(xi+0.5*h,yi+0.5*k2,zi+0.5*l2,ri+0.5*m2,si+0.5*n2,ti+0.5*o2,ui+0.5*p2);
   l3=h*d(xi+0.5*h,yi+0.5*k2,zi+0.5*l2,ri+0.5*m2,si+0.5*n2,ti+0.5*o2,ui+0.5*p2);
   m3=h*e(xi+0.5*h,yi+0.5*k2,zi+0.5*l2,ri+0.5*m2,si+0.5*n2,ti+0.5*o2,ui+0.5*p2);
   n3=h*f(xi+0.5*h,yi+0.5*k2,zi+0.5*l2,ri+0.5*m2,si+0.5*n2,ti+0.5*o2,ui+0.5*p2);
   o3=h*g(xi+0.5*h,yi+0.5*k2,zi+0.5*l2,ri+0.5*m2,si+0.5*n2,ti+0.5*o2,ui+0.5*p2);
   p3=h*k(xi+0.5*h,yi+0.5*k2,zi+0.5*l2,ri+0.5*m2,si+0.5*n2,ti+0.5*o2,ui+0.5*p2);
   k4=h*c(xi+h,yi+k3,zi+l3,ri+m3,si+n3,ti+o3,ui+p3);
   l4=h*d(xi+h,yi+k3,zi+l3,ri+m3,si+n3,ti+o3,ui+p3);
   m4=h*e(xi+h,yi+k3,zi+l3,ri+m3,si+n3,ti+o3,ui+p3);
   n4=h*f(xi+h,yi+k3,zi+l3,ri+m3,si+n3,ti+o3,ui+p3);
   o4=h*g(xi+h,yi+k3,zi+l3,ri+m3,si+n3,ti+o3,ui+p3);
   p4=h*k(xi+h,yi+k3,zi+l3,ri+m3,si+n3,ti+o3,ui+p3);
   yk4=yi+((k1+(2.0*(k2+k3))+k4)/6.0);
   zk4=zi+((l1+(2.0*(l2+l3))+l4)/6.0);
   rk4=ri+((m1+(2.0*(m2+m3))+m4)/6.0);
   sk4=si+((n1+(2.0*(n2+n3))+n4)/6.0);
   tk4=ti+((o1+(2.0*(o2+o3))+o4)/6.0);
   uk4=ui+((p1+(2.0*(p2+p3))+p4)/6.0);
   cout<<i<<"\t"<<xi<<"\t"<<yi<<"\t"<<"\t"<<zi<<"\n";
   cout<<i<<"\t"<<xi<<"\t"<<ri<<"\t"<<"\t"<<si<<"\n";
   cout<<i<<"\t"<<xi<<"\t"<<ti<<"\t"<<"\t"<<ui<<"\n\n";
   yi=yk4,zi=zk4,ri=rk4,si=sk4,ti=tk4,ui=uk4;}}

 else
 cout<<"Opcion no valida"<<endl;

 menu();
 cout<<"Seleccione una opcion:";cin>>opc;clrscr();
}//Cierre de while
}//Cierre de main
