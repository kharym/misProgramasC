// programa que recibe una hora por consola y entrega la hora 1 segundo despues
// input: horas, minutos y segundos 

#include<stdio.h>

int main(){
	
	int hora,min,seg;

	printf ("ingrese la hora entre 0 y 23 horas\n"); 
	scanf ("%i",&hora); 
	
	printf("ingrese el minuto entre 0 y 59 minutos\n"); 
	scanf("%i",&min);
	
	printf("ingrese el segundo entre 0 y 59 segundos\n");
	scanf("%i",&seg);
	
	if(hora <= 23 && hora>=0 && min<=59 && min>=0 && seg<= 59 && seg>= 0){
		
		seg = seg +1; 
		
		if (seg==60){
			
			min = min +1;
			seg= 0; 
		}
		if (min == 60){
			
			min = 0; 
			
			hora = hora +1;
		}
		
		
		if (hora == 24){
			
			hora = 0;
		}
		
		printf("la hora siguiente es %i:%i:%i",hora,min,seg);
	}
	else {
		
		printf( " la hora ingresa es incorrecta"); 
	}
	
	
	return 0; 
}
