#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void eliminarElem(list_int *lista, int elem)
{
    reset(lista);
    while(!isOos(*lista))
    {
        if(lista->cur->vipd == elem)
            suppres(lista);
        forwardd(lista);
    }
}

int main()
{
    /*  VARIABLES*/
    int o;
    int a;
    char salir;
    list_int lista;

    init(&lista);

    /*  MENU  */
    do{
        printf("\tBIENVENIDO A ESTE PROGRAMA DE PRUEBAS\n");
        printf("1. Insertar un elemento a la lista.\n2. Eliminar un elemento de la lista.\n3. Buscar un elemento en la lista.\n");
        printf("4. Ver el elemento apuntado.\n5. Copiar el elemento apuntado.\n6. Eliminar el elemento apuntado.\n0. Salir.\n");
        printf("Indique la operacion a realizar->");

        scanf("%i", &o);

            switch(o)
            {
            case 1:
                printf("Elemento a ingresar: ");
                scanf("%i", &a);
                insertt(&lista, a);
                break;
            case 2:
                printf("Elemento a eliminar: ");
                scanf("%i", &a);
                eliminarElem(&lista, a);
                break;
            case 3:
                break;
            case 4:
                a = copyy(lista);
                printf("El elemento apuntado es: %i", a);
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                printf("Debe seleccionar una de las operaciones disponibles.\n");
                break;
            }


    }while(o != 0);

    return 0;
}
