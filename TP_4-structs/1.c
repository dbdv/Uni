#include<stdio.h>
#include<string.h>
#define tam_nom
typedef struct Parte{
	int numero;
	char nombre[tam_nom];
}Parte;

int main(){
	Parte a, b[10];
	printf("Ingrese un numero: ");
	scanf("%i",&a.numero);
	printf("Ingrese un nombre: ");
	scanf("%24s",a.nombre);
	b[3].numero = a.numero;
	strcpy(b[3].nombre,a.nombre);	
	printf("El nombre ingresado es: %s\n",b[3].nombre);
	printf("El numero ingresado es: %i\n",b[3].numero);
return 0;}
