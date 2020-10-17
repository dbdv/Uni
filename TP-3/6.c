#include<stdio.h>
#include<string.h>

#define N 15
#define M 10

typedef char Cadena[N];

void IngresarCadenas(Cadena [], int *);
void ImprimirCadenas(Cadena [], int);

int main(){
    int cant;
    Cadena nuevasCadenas[M];

    IngresarCadenas(nuevasCadenas, &cant);
    ImprimirCadenas(nuevasCadenas, cant);

return 0;}

void IngresarCadenas(Cadena nuevasCadenas[], int *cant){
    do{
        printf("Cuantas cadenas va a ingresar\n-->");
        scanf("%i", cant);
    }while(*cant<0 || *cant>=M);

    for(int i=0; i<*cant; i++){
            printf("Ingrese la %i cadena\n-->",i+1);
            scanf("%14s[^\n]",&nuevasCadenas[i]);
    }
}

void ImprimirCadenas(Cadena nuevasCadenas[], int cant){
    for(int i=0; i<cant; i++){
        printf("%s",nuevasCadenas[i]);
    }
}
