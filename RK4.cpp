#include <iostream.h>
#include <conio.h>
#include <math.h>
void main(void)
{cout<<"\n\n";
 int x0=1,x1=6,x2=4;
 double f,f0=0,f1=1.791759,f2=1.386294,b0,b1,b2,x=0;
 cout<<"b0\t\tb1\t\tb2";
 cout<<"\n\n";
 b0=f0;

 b1=(f1-f0)/(x1-x0);

 b2=(((f2-f1)/(x2-x1))-b1)/(x2-x0);

 f=b0+b1*(x-x0)+b2*(x-x0)*(x-x1);

 cout<<b0<<"\t\t"<<b1<<"\t"<<b2<<"\n\n";
 cout<<f;
 cout<<"\n\n";
 cout<<"la ecuacion que ajusta los puntos es"<<"\n\n";

 cout<<b0<<" + "<<b1<<"*"<<"(X-1)"<<" + "<<"("<<b2<<")"<<"*"<<"(X-1)*(X-6)";
 cout<<"\n\n";
 cout<<"x\t\tf"<<"\n\n";
 for(x;x<=10;x++)
 {
  f=b0+b1*(x-x0)+b2*(x-x0)*(x-x1);
  cout<<"\n\n";
  cout<<x<<"\t\t"<<f ;
 }

 cout<<"\n\n";
 cout<<"realizado por Luis Andrade" ;
getch();
}