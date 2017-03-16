// serie de fibonacci hasta el termino ingresado por consola

#include <stdio.h> 

int main () {
	
	int a,b,c,x;
	
	a= 0; 
	b = 1; 
	c= a+b; 
	printf ("introducir el numero limite\n"); 
	scanf("%i",&x);
	
	if (x==0){
		
		printf("0"); 
	}  
	else if (x==1){
		
	printf("0 /1 /1 ");	
	}
	else {
		
		printf ("0 /1 /1 /");
		
		while (c<x){
		
		a= c; 
		c= a+b; 
		b=a; 
		
		printf ("%i /",c); 
		
		}
	
	}
	return 0; 
}
