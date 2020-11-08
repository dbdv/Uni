#include<stdio.h>

#define tam 1000

void cargar_n_dni(long [], int *);
void mostrar_dni(long [], int);

int main(){

    int op, cant=0;
    long dni[tam];
    printf("\tBienvenido\n");

    do{
        printf("Seleccione una opci%cn\n(1)-->Ingresar DNI\n(2)-->Mostrar DNI\n(3)-->Salir\n-->", 162);
        scanf("%i",&op);

        switch(op){
        case 1 : cargar_n_dni(dni, &cant);
            break;
        case 2 : if(cant) mostrar_dni(dni, cant);
                else printf("A%cn no ha ingresado ning%cn DNI\n\n",163,163);
            break;
        case 3 : printf("Adi%cs.\n",162);
            break;
        default : printf("Debe elegir una opci&cn v%clida.\n\n",162,160);
            break;
        }
    }while(op != 3);
return 0;}

void cargar_n_dni(long dni[], int *cant){
    int aux = *cant, igual;
    do{
        printf("Escriba cuantos DNI va a cargar(0-%i): ",tam-*cant);
        scanf("%i", cant);
        *cant += aux;
        if(*cant < 0 || *cant > tam) printf("La cantidad ingresada es inv%clida.\n\n",160);
    }while(*cant < 0 || *cant > tam);

    for(int i=aux; i<*cant; i++){
        do{
            printf("Ingrese el %i%c DNI: ",i+1,167);
            scanf("%ld", &dni[i]);

            if(dni[i]<10000000 || dni[i]>99999999) printf("El DNI ingresado es inv%clido\n\n",160);

            for(int j=0; j < i; j++){
                    if(dni[j] == dni[i]){
                    igual=1;
                    printf("El DNI que intenta ingresar ya fu%c ingresado\n\n",130);
            }
            }
        }while(dni[i]<10000000 || dni[i]>99999999 || igual == 1);
}
}

void mostrar_dni(long dni[], int cant){
    for(int i=0; i<cant; i++) printf("%ld\n",dni[i]);
}
