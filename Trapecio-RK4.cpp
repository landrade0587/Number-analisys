//UTILIZACION DE LAS LIBRERIAS

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>


double fx (double x){
	double e=2.718281828182818;
// return (pow(e,x));
	return pow((1+pow(x/2,2)),6.283185307);
}
double fx1(double x,double y){
	return((2*(x*x)-(4*x)+y));
}

void carga ();

//metodo para crear la accion de cargar la aplicacion
void carga (){
 cout<<endl;
 system ("tilte cargando aplicacion...");
 int xxx,yyy;
 for(xxx=1;xxx<=77;xxx++){
 	printf("\r\a cargando   ");
 	for(xxx=1;xxx<=10000000;yyy++){
   }

   print("█");
   }
   cout<<"\n";
 }

int op1;
char sw[5];

void main ()
{

      system("color f4");
      carga ();

		do{
      	system("color f4");
			cout<<"\n";
			cout<<"\n\n\n\n\n\n";
			cout<<"\t\t    ╔═опопопопопопопопопопопопопоп═╗"<<endl;
			cout<<"\t\t    ║        Menu De Metodos       ║"<<endl;
			cout<<"\t\t    ║       Escoja una Opcion      ║"<<endl;
			cout<<"\t\t    ╚═опопопопопопопопопопопопопоп═╝"<<endl;

			cout<<"\t\t    ╔═опопопопопопопопопопопопопопопоп═╗"<<endl;
			cout<<"\t\t    ║ 1  METODO DEL TRAPECIO          :║"<<endl;
			cout<<"\t\t    ║ 2  METODO DE SIMPSON            :║"<<endl;
			cout<<"\t\t    ║ 3  METODO DE RK4                :║"<<endl;
			cout<<"\t\t    ║ 4  SALIR                        :║"<<endl;
			cout<<"\t\t    ╚═опопопопопопопопопопопопопопопоп═╝"<<endl;
			cin>>op1;


			switch(op1){
				case 1:{
					double a,b,h,F,suma=0,x[50];
					int n,i;
               carga();
               system("color f1");
               cout<<"\n";
					cout<<"METODO DEL TRAPECIO\n";
					cout<<"Digite el limite inferior:";cin>>a;
					cout<<"Digite el limite superior:";cin>>b;
					cout<<"Digite el numero de particiones:";cin>>n;

					h=(b-a)/n;
					for( i=1;i<n;i++){
						x[i]=a+(i*h);
						suma=suma+fx(x[i]);
					}
					F=h*((fx(a)/2)+suma+(fx(b)/2));
					cout<<"La integral evaluada es:"<<F<<"\n\n";

				}break;
				case 2:{
            system("cls");
					double a,b,h,F,suma1=0,suma2=0,x[50];
					int n,i;
			        cout<<"\n";
					cout<<"\4METODO DE SIMPSON\4\n";
					cout<<"Digite el limite inferior:";cin>>a;
					cout<<"Digite el limite superior:";cin>>b;
					cout<<"Digite el numero de particiones:";cin>>n;

					h=(b-a)/n;
					for( i=1;i<n;i++){
						if(i%2==0){
							x[i]=a+(i*h);
							suma1=suma1+fx(x[i]);
						}else{
							x[i]=a+(i*h);
							suma2=suma2+fx(x[i]);
						}
					}
					F=((h)*((fx(a))+(2*suma1)+(4*suma2)+(fx(b))))/3;
					cout<<"La integral evaluada es:"<<F<<"\n\n";



			   }break;
					case 3:{
					double a,b,h,y,y1,k1,k2,k3,k4;
					double i=0;
               carga();
               system ("color f1");
               cout<<"\n";
					cout<<"\4METODO DE RK4\4\n";
					cout<<"Digite el limite inicial:";cin>>a;
					cout<<"Digite el limite final:";cin>>b;
					cout<<"Digite la separacion entre intervalos:";cin>>h;
					cout<<"Digite el Y(0):";cin>>y;


					for(i=a;i<b;i=i+h){
						k1=h*(fx1(i,y));
						k2=h*(fx1(i+(h/2),y+(k1/2)));
						k3=h*(fx1(i+(h/2),y+(k2/2)));
						k4=h*(fx1(i+h,y+k3));

						y1=y+((k1+(2*k2)+(2*k3)+k4)/6);
						y=y1;
						cout<<"Y("<<i<<"):"<<y<<"\n";


					}
					cout<<"\n";
               // cout<<y1;


			   }break;
            defaul:


					cout<<"\t\t\t ╔═опопопопопопопопоп═╗"<<endl;
					cout<<"\t\t\t ║  OPCION INCORRECTA ║"<<endl;
					cout<<"\t\t\t ╚═опопопопопопопопоп═╝"<<endl;

                getchar();
                system("cls");

			}
               cout<<"\t\t    ╔═опопопопопопопопопопопопопоп═╗"<<endl;
					cout<<"\t\t    ║ Desea Volver <<si>> o <<no>>:║"<<endl;
					cout<<"\t\t    ╚═опопопопопопопопопопопопопоп═╝"<<endl;




	}while ((strcmp(sw,"si")==0)||(strcmp(sw,"SI")==0));



            	cout<<"\t\t    ╔═опопопопопопопопопопопопопоп═╗"<<endl;
					cout<<"\t\t    ║	    METODOS  NUMERICOS  	 ║"<<endl;
               cout<<"\t\t    ║         IV SEMESTRE          ║"<<endl;
					cout<<"\t\t    ╚═опопопопопопопопопопопопопоп═╝"<<endl;


               cout<<"\t\t    ╔═опопопопопопопопопопопопопоп═╗"<<endl;
					cout<<"\t\t    ║           FIN                ║"<<endl;
					cout<<"\t\t    ╚═опопопопопопопопопопопопопоп═╝"<<endl;

}

