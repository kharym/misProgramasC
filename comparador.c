// programa que encuentra el mayor y menor entre 3 numeros 

#include <stdio.h>

int main(){
	
	int x,y,z,max,min;
	
	printf("ingrese el valor de x\n");
	scanf("%i",&x);
	
	printf("ingrese el valor de y\n");
	scanf("%i",&y);
	
	printf("ingrese el valor de z\n");
	scanf("%i",&z);
	
	if (x>y){
		if(x>z){
			
			max = x;
			printf("el numero %i es el mayor",max);
			
		}else {
			
			max = z;
			printf("el numero %i es el mayor",max);
		}
		
	}else{
		
		if (y>z){
			
			max = y;
			printf("el numero %i es el mayor",max);
		}
	}
	
	
	
	return 0;
}
