// identificar que el numero ingresado por consola es par o impar 

#include <stdio.h>

int main (){
	
	int x,y; 
	
	printf("ingresa un número\n");
	scanf("%i",&x);
	
	printf("\n\n");
	
	y = x%2;
 	
	if(y == 0){
		
		printf("el numero %i es par",x);
	} 
	else {
		
		printf("el numero %i es impar",x);
	}
	
	return 0;
	
}
