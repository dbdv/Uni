#include<stdio.h>

#define tam 10

void IngresoString(char[], int *);
void ImprimirString(char[], int *);

int main(){

    int cant;
    char MiCadena[tam];

    IngresoString(MiCadena, &cant);
    ImprimirString(MiCadena, &cant);

return 0;
}

void IngresoString(char cadena[], int *cant){

    int i=0;
    do{
        i++;

        if(i != 1) printf("\tERROR\n\tNo puede ingresar esa cantidad.\n");

        printf("Puede ingresar hasta hasta 9 caracteres\nCuantos va a ingresar?: ");
        scanf("%i",cant);
    }while(*cant >= tam);

    for(i = 0; i < *cant; i++){
        printf("Ingrese un caracter: ");
        getchar();
        scanf("%c",&cadena[i]);
    }
}

void ImprimirString(char cadena[], int *cant){

    printf("\tPosicion Valor\n");
    for(int i = 0; i <= *cant - 1; i++){
        printf("\t%i\t %c\n",i+1,cadena[i]);
    }
}
