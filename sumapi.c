#include<stdio.h> // libreria, sirve para imprimir cosas por pantallas y pedirle al usuario que digite datos, libreria estandar de entrada y salida

#define PI 3.1416        // macreo, sirve para definir una variable que se utiliza a lo largo del programa

int y = 5;        // variable global, se puede ocupar en cualquier funcion

int main (){      // funcion principal
	
	int x = 10;   // variable local, se puede ocupar solo en esta funcion 
	int suma=0;
	
	suma= PI + x; 
	
	printf("el resultado es %i",suma);
	
	
	return 0;
	
}
