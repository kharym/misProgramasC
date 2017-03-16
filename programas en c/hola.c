// En esta parte incluyo las librerias
#include<stdio.h> //libreria para  funciones de entrada y salida
#include<stdlib.h> // libreria estandar, en este caso para system
int main(){
    char nom[20]; // declaro una variable caracter que almacena 20 caracteres.
    printf("¿como te llamas?");
    scanf("%s",&nom); //leyendo datos
    printf("hola %s",nom); // informar mensaje con datos
    return 0;
    system("PAUSE");
}
