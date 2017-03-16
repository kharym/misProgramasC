//programa en el que se introduce un numero y entrega el respectivo dia de la semana

#include <stdio.h>

int main (){
	
	int x; 
	
	printf ("ingrese un numero\n");
	scanf ("%i", &x);
	
	
	switch (x){
		
		case 1: printf("lunes");break;
		case 2: printf("martes");break; 
		case 3: printf("miercoles");break;
		case 4: printf("jueves");break; 
		case 5: printf("viernes");break;
		default: printf("el numero ingresado es incorrecto");
		
		
	}
	
	
	return 0;
}
