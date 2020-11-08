#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float sumatoria(int positivo, int entero);

int main(){

	printf("**FUNCION DE UNA SUMATORIA**\n");

	int positivo, entero;
	float resultado;

	printf("Ingrese un numero positivo: ");
	scanf("%i",&positivo);
	printf("\n");
	if (positivo < 1)
	{
		printf("Debe ingresar un numero positivo\n");
		printf("Ingrese un numero positivo: ");
		scanf("%i",&positivo);
	}
	printf("Ingrese un numero entero: ");
	scanf("%i",&entero);

	resultado = sumatoria(positivo,entero);
	system("clear");

	printf("**FUNCION DE UNA SUMATORIA**\n");
	printf("\n");
	printf("El resultado es: %0.2f\n",resultado);

	return 0;
}

float sumatoria(int positivo, int entero){
	float resultado;

	if (positivo < 10)
	{
		for (int i = 1; i < positivo; ++i)
		{
			resultado += entero/i;
		}
	}else{
		for (int i = 1; i < positivo; ++i)
		{
			resultado += sqrt(abs(entero))*i;
		}
	}
	return resultado;
}