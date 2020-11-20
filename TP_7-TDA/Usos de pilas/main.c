#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main(){
    int n, aux;
    pila pill;
    init(&pill);

    /*MENU*/
    do{
        printf("\nPRUEBA DE PILAS\n");
        printf("1. Ingresar elemento a pila\n2. Sacar elemento de pila\n3. Mostrar el ultimo elemento de la pila\n4. Salir.\nOpcion: ");
        scanf("%i",&n);
        switch(n){
            case 1:
                if(isFull(pill))
                    printf("La pila se encuentra llena.\n");
                else{
                    printf("Entero a cargar: ");
                    scanf("%i",&aux);
                    poner(&pill, aux);
                }
                break;
            case 2:
                if(isEmpy(pill))
                    printf("La pila se encuentra vacia.\n");
                else
                    sacar(&pill);
                break;
            case 3:
                if(isEmpy(pill))
                    printf("La pila se encuentra vacia.\n");
                else
                    printf("El ultimo elemento es: %i.\n",verUltimo(pill));
                break;
            case 4:
                printf("Adios!\n");
                break;
            default:
                printf("Debe seleccionar una de las opciones que se muestran.\n");
                break;
        }
    }while(n!=4);

    return 0;
}
