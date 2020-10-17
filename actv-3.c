#include<stdio.h>

#define tam 1000

void cargar_n_dni(long [], int *);
void mostrar_dni(long [], int);

int main(){

    int op, cant=0;
    long dni[tam];

    do{
        printf("\tBienvenido\nSeleccione una opcion\n(1)-->Ingresar DNI\n(2)-->Mostrar DNI\n(3)-->Salir\n-->");
        scanf("%i",&op);

        switch(op){
        case 1 : cargar_n_dni(dni, &cant);
            break;
        case 2 : if(cant) mostrar_dni(dni, cant);
                else printf("Aun no ha ingresado ningun DNI\n");
            break;
        case 3 : printf("Adios.\n");
            break;
        default : printf("Debe elegir una opcion valida.\n");
            break;
        }
    }while(op != 3);
return 0;}

void cargar_n_dni(long dni[], int *cant){
    int aux = *cant;
    do{
        printf("Escriba cuantos DNI va a cargar: ");
        scanf("%i", cant);
        *cant += aux;
        if(*cant < 0 || *cant > tam) printf("La cantidad ingresada es invalida.\n");
    }while(*cant < 0 || *cant > tam);

    for(int i=aux; i<*cant; i++){
        do{
            printf("Ingrese el %i%c DNI: ",i+1,167);
            scanf("%ld", &dni[i]);
            if(dni[i]<10000000 || dni[i]>99999999) printf("El DNI ingresado es invalido\n");
        }while(dni[i]<10000000 || dni[i]>99999999);
    }
}

void mostrar_dni(long dni[], int cant){
    for(int i=0; i<cant; i++) printf("%ld\n",dni[i]);
}
