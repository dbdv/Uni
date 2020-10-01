#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int matematicas;
	int ingles;
	int fisica;
}notas;

void darnotas(notas *not);
void mostrarnotas(notas *not);

int  main(){

	notas not;
	darnotas(&not);
	system("clear");
	mostrarnotas(&not);
	
	return 0;
}

void darnotas(notas *not){
	printf("Introduzca la nota de matematicas: ");
	scanf("%i",&not->matematicas);

	printf("Introduzca la nota de ingles: ");
	scanf("%i",&not->ingles);

	printf("Introduzca la nota de fisica: ");
	scanf("%i",&not->fisica);

}

void mostrarnotas(notas *not){
	printf("La nota de matematicas es: %i.\n",not->matematicas);
	printf("La nota de ingles es: %i.\n",not->ingles);
	printf("La nota de fisica es: %i.\n",not->fisica);

}