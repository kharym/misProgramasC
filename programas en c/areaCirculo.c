// programa para calcular el �rea de un c�rculo

#include<stdio.h>
#define PI 3.14159

float procesar(float radio);

main(){

	float radio, area;
	int i,n; // contador y numero de circulos

	printf("\ningrese cantidad de circulos\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++){

	printf("\nIngrese el radio del circulo n�mero %d\n",i);
	scanf("%f",&radio);
	if(radio<0)
        area = 0;
    else
        area = procesar(radio);
    printf("\nel �rea del circulo es: %f\n",area);
    }
    return 0;

}

float procesar(float r){

	float a;
	a=PI*r*r;
	return a;
}
