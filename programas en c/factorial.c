//programa que calcula factorial de dos numeros atravez de funciones

#include<stdio.h> 

int factorial(int a); 

int main (){
	
	int x,y,fact1,fact2;
	
	printf("ingrese el primer numero\n");
	scanf("%i",&x);
	
	printf("ingrese el segundo numero\n");
	scanf("%i",&y);
	
	fact1 = factorial(x);
	fact2 = factorial(y);
	
	printf("el facotiral de %i es %i\n",x,fact1);
	printf("el facotiral de %i es %i",y,fact2);
	
	
	return 0;
}

int factorial(int a){
	
	int i, aux; 
	aux=1; 
	
	for (i=1;i<=a;i++){
		
		aux = aux*i;
		
		
	}
	
	return aux;
}
