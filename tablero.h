#ifndef TABLERO_H
#define TABLERO_H

#define SIZE 11
#define SIZEB 12
class Tablero{
	private:
		int xa,ya,xb,yb;
		char matrix[SIZE][SIZE];
		char ejemplo[SIZEB][SIZEB];
	public:
		Tablero();
		void createMatrix();
		void printMatrix();

		void createEjemplo();
		void printEjemplo();

		void movePlayera(int,int,int,int);
		void movePlayerb(int,int,int,int);
		~Tablero();
};
#endif
