#include<stdio.h>

#define N 10
#define M 10

void IngresarCadenas(char cadenas[], int cant);
void ImprimirCadenas(char cadenas[], int cant);

int main(void){
	
	typedef char Cadena[M];
	Cadena MiTexto[N];
	int cant;

	do{
		printf("Cuantas palabras va a ingresar: ");
		scanf("%i",&cant);
	}while(cant < 1 );

	for(int i=0; i<cant;i++) IngresarCadenas(MiTexto[i], cant);

	
	for(int i=0; i<cant;i++) ImprimirCadenas(MiTexto[i], cant);


return 0;}

void IngresarCadenas(char cadenas[],int cant){

	for(int i=0; i<cant; i++){
		printf("\nIngrese la %i palabra\n-->",i+1);
		scanf("%s",&cadenas[i]);}
}

void ImprimirCadenas(char cadenas[], int cant){
	for (int i = 0; i < cant; ++i){
		printf("%c",cadenas[i]);
	}
}