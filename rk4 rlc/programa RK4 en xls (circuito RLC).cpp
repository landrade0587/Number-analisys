#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <fstream>

double g(double R,double I,double Q)
{return (((R/200)*I)-(Q/0.2)+(0.005));}
void main(void)
{double a=0,b=5,I=0,h=0.1,Q=0,It,k1,k2,k3,k4,C1,t,C2,C3,C4,Qt,R=0;

cout<<" tabla de datos \n\n";
cout<<"t\t\tI"<<"\n";

                       //metodo de RK4
ofstream RKR1("RK0.xls");
ofstream RKR2("RK50.xls");
ofstream RKR3("RK100.xls");
ofstream RKR4("RK300.xls");

for(t=a;t<=b;t=t+h)
 {
 k1=h*I;
 C1=h*g(R,I,Q);

 k2=(I+h*(C1/2));
 C2=g(R,I+h*(C1/2),Q+h*(k1/2));

 k3=(I+h*(C2/2));
 C3=g(R,I+h*(C2/2),Q+h*(k2/2));

 k4=(I+h*C3);
 C4=g(R,I+h*C3,Q+h*k3);

 Qt=Q+h*((k1+2*k2+2*k3+k4)/6);
 It=I+h*((C1+2*C2+2*C3+C4)/6);

I=It;
Q=Qt;

cout<<t<<"\t\t"<<It<<endl;
RKR1<<t<<"\t\t"<<It<<endl;
}

cout<<endl<<endl<<endl;
R=50;
cout<<" tabla de datos para R=50 \n\n";
cout<<"t\t\tI"<<"\n";

for(t=a;t<=b;t=t+h)
 {
 k1=h*I;
 C1=h*g(R,I,Q);

 k2=(I+h*(C1/2));
 C2=g(R,I+h*(C1/2),Q+h*(k1/2));

 k3=(I+h*(C2/2));
 C3=g(R,I+h*(C2/2),Q+h*(k2/2));

 k4=(I+h*C3);
 C4=g(R,I+h*C3,Q+h*k3);

 Qt=Q+h*((k1+2*k2+2*k3+k4)/6);
 It=I+h*((C1+2*C2+2*C3+C4)/6);

I=It;
Q=Qt;

cout<<t<<"\t\t"<<It<<endl;
RKR2<<t<<"\t\t"<<It<<endl;
}

cout<<endl<<endl<<endl;
R=100;
cout<<" tabla de datos para R=100 \n\n";
cout<<"t\t\tI"<<"\n";

for(t=a;t<=b;t=t+h)
 {
 k1=h*I;
 C1=h*g(R,I,Q);

 k2=(I+h*(C1/2));
 C2=g(R,I+h*(C1/2),Q+h*(k1/2));

 k3=(I+h*(C2/2));
 C3=g(R,I+h*(C2/2),Q+h*(k2/2));

 k4=(I+h*C3);
 C4=g(R,I+h*C3,Q+h*k3);

 Qt=Q+h*((k1+2*k2+2*k3+k4)/6);
 It=I+h*((C1+2*C2+2*C3+C4)/6);

I=It;
Q=Qt;

cout<<t<<"\t\t"<<It<<endl;
RKR3<<t<<"\t\t"<<It<<endl;
}

cout<<endl<<endl<<endl;
R=300;
cout<<" tabla de datos para R=300 \n\n";
cout<<"t\t\tI"<<"\n";

for(t=a;t<=b;t=t+h)
 {
 k1=h*I;
 C1=h*g(R,I,Q);

 k2=(I+h*(C1/2));
 C2=g(R,I+h*(C1/2),Q+h*(k1/2));

 k3=(I+h*(C2/2));
 C3=g(R,I+h*(C2/2),Q+h*(k2/2));

 k4=(I+h*C3);
 C4=g(R,I+h*C3,Q+h*k3);

 Qt=Q+h*((k1+2*k2+2*k3+k4)/6);
 It=I+h*((C1+2*C2+2*C3+C4)/6);

I=It;
Q=Qt;

cout<<t<<"\t\t"<<It<<endl;
RKR4<<t<<"\t\t"<<It<<endl;
}

getch();
}
