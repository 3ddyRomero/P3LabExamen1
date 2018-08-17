#include "tablero.h"
#include <iostream>

using namespace std;

Tablero::Tablero(){

}

void Tablero::createMatrix(){
	for(int i=0;i<SIZE;i++){
	    for(int j=0;j<SIZE;j++){
	    	matrix[i][j] = '_';
	    }
	}


	matrix[5][0]='#';
	matrix[5][10]='#';
	matrix[0][5]='+';
	matrix[10][5]='+';
}

void Tablero::printMatrix(){
	for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                cout<<matrix[i][j];
            }cout<<endl;
        }cout<<endl;

}

void Tablero::createEjemplo(){
        for(int i=0;i<SIZEB;i++){
            for(int j=0;j<SIZEB;j++){
        	ejemplo[i][j] = '_';
            }
        }

	
        ejemplo[6][1]='#';
        ejemplo[6][11]='#';
        ejemplo[1][6]='+';
        ejemplo[11][6]='+';

	ejemplo[0][0]=' ';
	ejemplo[1][0]='0';
	ejemplo[2][0]='1';
	ejemplo[3][0]='2';
	ejemplo[4][0]='3';
	ejemplo[5][0]='4';
	ejemplo[6][0]='5';
	ejemplo[7][0]='6';
	ejemplo[8][0]='7';
	ejemplo[9][0]='8';
	ejemplo[10][0]='9';
	ejemplo[11][0]='z';
	//ejemplo[12][0]='v';

	ejemplo[0][1]='0';
        ejemplo[0][2]='1';
        ejemplo[0][3]='2';
        ejemplo[0][4]='3';
        ejemplo[0][5]='4';
        ejemplo[0][6]='5';
        ejemplo[0][7]='6';
        ejemplo[0][8]='7';
        ejemplo[0][9]='8';
        ejemplo[0][10]='9';
        ejemplo[0][11]='x';
        //ejemplo[0][12]='v';


}

void Tablero::printEjemplo(){
	cout<<"***********************************************"<<endl;
	cout<<"Ejemplo de coordenadas para Jugar:"<<endl;
	cout<<"La fila fila y columna x se refiere al numero 10."<<endl;
	cout<<"En es casilla ingrese el numero, NO la letra"<<endl<<endl;
        for(int i=0;i<SIZEB;i++){
            for(int j=0;j<SIZEB;j++){
                cout<<ejemplo[i][j];
            }cout<<endl;
        }cout<<endl;
	cout<<"***********************************************"<<endl;

}


void Tablero::movePlayera(int pxa,int pya,int pxb,int pyb){
	
	if(matrix[pxa][pya] != '+'){
	   cout<<"¡¡Esta Pieza No es Suya!!"<<endl;
	   cout<<"Pierde Turno"<<endl;
	}else{
		if(pyb >= 0 && pxb>=0 || pyb < 11 && pxb < 11){
		   if(matrix[pxb][pyb] == '_' && (pxa+1==pxb && pya==pyb) ||
                            matrix[pxb][pyb] == '_' && (pxa-1==pxb && pya==pyb) ||
                            matrix[pxb][pyb] == '_' && (pya+1==pyb && pxb==pxa) ||
                            matrix[pxb][pyb] == '_' && (pya-1==pyb && pxb==pxa) ||
                            matrix[pxb][pyb] == '_' && (pxa+1==pxb && pya+1==pyb) ||
                            matrix[pxb][pyb] == '_' && (pxa-1==pxb && pya-1==pyb) ||
                            matrix[pxb][pyb] == '_' && (pxa+1==pxb && pya-1==pyb) ||
                            matrix[pxb][pyb] == '_' && (pxa-1==pxb && pya+1==pyb) ){
			

			   matrix[pxa][pya] = '+';
			   matrix[pxb][pyb] = '+';

			if(matrix[pxb+1][pyb]=='#')
			   matrix[pxb+1][pyb] = '+';
			if(matrix[pxb-1][pyb]=='#')
			   matrix[pxb-1][pyb]= '+';
			if(matrix[pxb][pyb+1]=='#')
			   matrix[pxb][pyb+1]='+';
			if(matrix[pxb][pyb-1]== '#')
			   matrix[pxb][pyb-1]='+';
			if(matrix[pxb+1][pyb+1]== '#')
                           matrix[pxb+1][pyb+1]='+';
			if(matrix[pxb-1][pyb-1]== '#')
                           matrix[pxb-1][pyb-1]='+';
			if(matrix[pxb+1][pyb-1]== '#')
                           matrix[pxb+1][pyb-1]='+';
			if(matrix[pxb-1][pyb+1]== '#')
                           matrix[pxb-1][pyb+1]='+';
		

			
		   }else if(matrix[pxb][pyb] == '_' && pxa+2==pxb && pya==pyb ||
                      	    matrix[pxb][pyb] == '_' && pxa-2==pxb && pya==pyb ||
                            matrix[pxb][pyb] == '_' && pya+2==pyb && pxb==pxa ||
                            matrix[pxb][pyb] == '_' && pya-2==pyb && pxb==pxa ||
                            matrix[pxb][pyb] == '_' && pxa+2==pxb && pya+2==pyb ||
                            matrix[pxb][pyb] == '_' && pxa-2==pxb && pya-2==pyb ||
                            matrix[pxb][pyb] == '_' && pxa+2==pxb && pya-2==pyb ||
                            matrix[pxb][pyb] == '_' && pxa-2==pxb && pya+2==pyb){
				
			    	matrix[pxa][pya] = '_';
				matrix[pxb][pyb] = '+';
				cout<<"dos"<<endl;
		   }
		}

	}	
}

void Tablero::movePlayerb(int pxa,int pya,int pxb,int pyb){
	 if(matrix[pxa][pya] != '+'){
           cout<<"¡¡Esta Pieza No es Suya!!"<<endl;
           cout<<"Pierde Turno"<<endl;
        }else{
                if(pyb >= 0 && pxb>=0 || pyb < 11 && pxb < 11){
                   if(matrix[pxb][pyb] == '_' && (pxa+1==pxb && pya==pyb) ||
                            matrix[pxb][pyb] == '_' && (pxa-1==pxb && pya==pyb) ||
                            matrix[pxb][pyb] == '_' && (pya+1==pyb && pxb==pxa) ||
                            matrix[pxb][pyb] == '_' && (pya-1==pyb && pxb==pxa) ||
                            matrix[pxb][pyb] == '_' && (pxa+1==pxb && pya+1==pyb) ||
                            matrix[pxb][pyb] == '_' && (pxa-1==pxb && pya-1==pyb) ||
                            matrix[pxb][pyb] == '_' && (pxa+1==pxb && pya-1==pyb) ||
                            matrix[pxb][pyb] == '_' && (pxa-1==pxb && pya+1==pyb) ){


                           matrix[pxa][pya] = '+';
                           matrix[pxb][pyb] = '+';

                        if(matrix[pxb+1][pyb]=='+')
                           matrix[pxb+1][pyb] = '#';
                        if(matrix[pxb-1][pyb]=='+')
                           matrix[pxb-1][pyb]= '#';
                        if(matrix[pxb][pyb+1]=='#')
                           matrix[pxb][pyb+1]='#';
                        if(matrix[pxb][pyb-1]== '#')
                           matrix[pxb][pyb-1]='#';
                        if(matrix[pxb+1][pyb+1]== '#')
                           matrix[pxb+1][pyb+1]='#';
                        if(matrix[pxb-1][pyb-1]== '+')
                           matrix[pxb-1][pyb-1]='#';
                        if(matrix[pxb+1][pyb-1]== '+')
                           matrix[pxb+1][pyb-1]='#';
                        if(matrix[pxb-1][pyb+1]== '+')
                           matrix[pxb-1][pyb+1]='#';



                   }else if(matrix[pxb][pyb] == '_' && pxa+2==pxb && pya==pyb ||
                            matrix[pxb][pyb] == '_' && pxa-2==pxb && pya==pyb ||
                            matrix[pxb][pyb] == '_' && pya+2==pyb && pxb==pxa ||
                            matrix[pxb][pyb] == '_' && pya-2==pyb && pxb==pxa ||
                            matrix[pxb][pyb] == '_' && pxa+2==pxb && pya+2==pyb ||
                            matrix[pxb][pyb] == '_' && pxa-2==pxb && pya-2==pyb ||
                            matrix[pxb][pyb] == '_' && pxa+2==pxb && pya-2==pyb ||
                            matrix[pxb][pyb] == '_' && pxa-2==pxb && pya+2==pyb){

                                matrix[pxa][pya] = '_';
                                matrix[pxb][pyb] = '+';
                               // cout<<"dos"<<endl;
                   }
                }

        }


}


Tablero::~Tablero(){

}
