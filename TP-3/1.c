#include<stdio.h>

#define tam 10

void IngresoString(char[], int *);
void ImprimirString(char[], int *);

int main(){

    int control=0;
    char MiCadena[tam];

    IngresoString(MiCadena, &control);
    ImprimirString(MiCadena, &control);

return 0;
}

void IngresoString(char cadena[], int *control){

    int i=0;
    do{
        i++;

        if(i != 1)
            printf("\tERROR\n\tNo puede ingresar esa cantidad.\n");

        printf("Puede ingresar hasta hasta 9 caracteres\nCuantos va a ingresar?: ");
        scanf("%i",control);
    }while(*control >= tam);

    printf("Ingrese una palabra: ");
    scanf("%9s",cadena);
}

void ImprimirString(char cadena[], int *control){

    printf("\tPosicion Valor\n");
    for(int i = 0; i <= *control - 1; i++){
        printf("\t%i\t %c\n",i+1,cadena[i]);
    }
}
