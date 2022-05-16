/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables enteras
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Ciclos
    -Contador
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main() {
	//Declaración de variables
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

