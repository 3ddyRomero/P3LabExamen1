#include <iostream>
#include <string>
#include "tablero.h"
using namespace std;

int main(){
	Tablero* tabla = new Tablero();
	Tablero* ejemp = new Tablero();	
	
	cout<<"Las coordenadas se toman en cuenta de la siguiente forma:"<<endl
                <<"En X de arriba hacia abajo."<<endl
                <<"En Y de izquierda a derecha."<<endl
                <<"**Nota: Las coordenadas van de 0-->10.**"<<endl<<endl;

        string Playera, Playerb;
        cout<<"Ingrese Nombre del Player 1: "<<endl;
        cin>>Playera;
        cout<<"Ingrese Nombre del Player 2: "<<endl;
        cin>>Playerb;

        cout<<"Empieza "<<Playera<<" con la pieza --> + <-- ."<<endl<<endl;
        cout<<"**Board**"<<endl<<endl;

	tabla->createMatrix();
	tabla->printMatrix();
	ejemp->createEjemplo();
	ejemp->printEjemplo();
	
	bool turno = false;
	int x=0,y=0,a=0,b=0;
	int conta=1 , verifacionPieza = -1;
	int opcion = 0;

	        while(turno == false){
                x=-1,y=-1,a=-1,b=-1;
                while((x<0 || x>11)||(y<0 || y>11) || (a<0 || a>11) || (b<0 || b>11)){
                        cout<<"Ingrese la coordenada en x de la pieza a mover: "<<endl;
                        cin>>x;
                        cout<<"Ingrese la coordenada en y de la pieza a mover: "<<endl;
                        cin>>y;
                        cout<<"Ingrese la coordenada en x en la direccion a moverse: "<<endl;
                        cin>>a;
                        cout<<"Ingrese la coordenada en y en la direccion a moverse: "<<endl;
                        cin>>b;
                }
                if(conta % 2 != 0){
                        cout<<Playera<<" <--> Pieza (+)"<<endl;
                        tabla->movePlayera(x,y,a,b);

                        while(verifacionPieza == 0){
                                while((x<0 || x>11) || (y<0 || y>11) || (a<0 || a>11) || (b<0 || b>11)){
                                        cout<<"Ingrese la coordenada en x de la pieza a mover: "<<endl;
                                        cin>>x;
                                        cout<<"Ingrese la coordenada en y de la pieza a mover: "<<endl;
                                        cin>>y;
                                        cout<<"Ingrese la coordenada en x en la direccion a moverse: "<<endl;
                                        cin>>a;
                                        cout<<"Ingrese la coordenada en y en la direccion a moverse: "<<endl;
                                        cin>>b;
                                }
                                
                        }tabla->printMatrix();
                        ejemp->printEjemplo();
                        conta++;
                        verifacionPieza = -1;
                }else if(conta % 2 == 0){
                        cout<<Playerb<<" <--> Pieza (#)"<<endl;
                        tabla->movePlayerb(x,y,a,b);
                        while(verifacionPieza == 0){
                                while((x<0 || x>11) || (y<0 || y>11) || (a<0 || a>11) || (b<0 || b>11)){
                                        cout<<"Ingrese la coordenada en x de la pieza a mover: "<<endl;
                                        cin>>x;
                                        cout<<"Ingrese la coordenada en y de la pieza a mover: "<<endl;
                                        cin>>y;
                                        cout<<"Ingrese la coordenada en x en la direccion a moverse: "<<endl;
                                        cin>>a;
                                        cout<<"Ingrese la coordenada en y en la direccion a moverse: "<<endl;
                                        cin>>b;
                                }
                        }tabla->printMatrix();
                        ejemp->printEjemplo();
                        conta++;
                        verifacionPieza = -1;
                }
                cout<<"¿Seguir Jugando?"<<endl<<"Pulse:"<<endl
                        <<"0--> NO"<<endl<<"1--> SI"<<endl;
                        cin>>opcion;
                if(opcion == 0){
                        turno = true;
                }

        }delete tabla;
		delete ejemp;



return  0;
}
