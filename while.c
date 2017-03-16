// introducir dos numeros y que la consola devuelva los numeros entremedio 

#include <stdio.h>

int main (){
	
	int x,y; 
	
	printf("ingrese el numero menor\n"); 
	scanf("%i",&x); 
	
	printf("ingrese el numero mayor\n");
	scanf("%i",&y); 
	
	printf("\n\n");
	while (x<=y) {
		
		printf("%i\n",x);
		
		x = x+1;
		
	}
	
}
