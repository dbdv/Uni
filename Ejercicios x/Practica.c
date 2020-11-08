/*Una empresa que trabaja con vehículos desea calcular las necesidades 
de combustible (cantidad de combustible necesario para llenar los 
depósitos de todos sus vehículos) para lo cual nos han facilitado 
este esquema de cálculo. Se desea crear un programa para que puedan 
realizar el cálculo de forma automatizada.

 [ESQUEMA DE CÁLCULO PARA EL PROGRAMA]

1.  Inicio

2.  [Definición de vehículos]

3.  Turismos = 32

4.  Todoterrenos = 11

5.  [Fin de definición de vehículos]

6.  [Definición de capacidad de depósitos]

7.  Capturismos = 40

8.  Captodot = 65

9.  [Fin de definición de capacidad de depósitos]

10.  [Cálculo de necesidades de combustible]

11.  Necesidadescom = Turismos * Capturismos + Todoterrenos * Captodot

12.  [Fin de cálculo de necesidades de combustible]

13.  Fin [aprenderaprogramar.com]*/


#include <stdio.h>
#include <stdlib.h>

int main() {

	//Definicion de vehiculos
	int turismo, todoTerreno;

	//Definicion de capacidad
	float capTurismo, capTodoTerre;

	//Peticion de datos
	printf("Introduzca la cant de vehiculos de turismo: ");
	scanf("%i",&turismo);

	printf("\nIntroduzca la cant de vehiculos de todo terreno: ");
	scanf("%i",&todoTerreno);

	printf("\nIntroduzca la capacidad por vehiculo de turismo: ");
	scanf("%f",&capTurismo);

	printf("\nIntroduzca la capacidad por vehiculo todo terreno: ");
	scanf("%f",&capTodoTerre);

	//Calculo
	double necesidadDeCombust = turismo*capTurismo+todoTerreno*capTodoTerre;

	system("clear");

	printf("La necesidad de combustible es: %.2f\n",necesidadDeCombust);

	return 0;

}