/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables enteras
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -Ciclos
    -Contador
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
int main() {
	//Declaraci�n de variables
	int i=0, numero;
	//Proceso
	//Ciclo
	while(numero !=0) {
		printf("Introduce un numero:");
		scanf("%d", &numero);
		if(numero<0){
		   i++;
		} 
    }
    //Salida
	printf("La cantidad de numeros negativos son : %d", i);
	return 0;	
}

