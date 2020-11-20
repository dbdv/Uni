#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

void cargar_personas(person p[], int n){
    int i, tipo;
    long numdoc;
    char nom[15], ape[15], mail[15];
    init(p);

    for(i=0; i<n; i++){
        //init(&p[i]);
        printf("Nombre: ");
        fflush(stdin);
        gets(nom);
        printf("Apellido: ");
        fflush(stdin);
        gets(ape);
        printf("Mail: ");
        fflush(stdin);
        gets(mail);

        printf("Tipo de doc: ");
        do{
            scanf("%i", &tipo);
            if(tipo<1 || tipo>4)
                printf("No es una de las opciones.\nIntente nuevamente: ");
        }while(tipo<1 || tipo>4);

        printf("Numero de doc: ");
        do{
            scanf("%ld", &numdoc);
            if(numdoc < 10000000 || numdoc > 99999999)
                printf("El documento ingresado no es valido.\nIntente nuevamente: ");
        }while(numdoc < 10000000 || numdoc > 99999999);

        cargar_ape(&p[i].apellido, ape);
        cargar_nom(&p[i].nombre, nom);
        cargar_mail(&p[i].mail, mail);
        cargar_tipodoc(&p[i].dni.tipo, tipo);
        cargar_dni(&p[i].dni.num, numdoc);
    }

}
void mostrar_personas(person p[], int base, int top){
    if(base == top)
        printf("\nEsos son todos los datos cargados.\n");
    else{
        printf("Nombre: %s",mostrar_nom(p[base]));
        printf("Apellido: %s",mostrar_ape(p[base]));
        printf("Numero de doc: %ld",mostrar_dni(p[base]).num);
        printf("Mail: %s",mostrar_mail(p[base]));
        mostrar_personas(p, base+1,top);
    }
}
int main(){
    person* lista_personas;
    int n;

    printf("Cuantas personas va a cargar: ");
    do{
        scanf("%i", &n);
        if(n<1)
            printf("Debe ser una cantidad entera mayor a 0.\nIntente nuevamente: ");
    }while(n<1);

    lista_personas = (person*)malloc(sizeof(person)*n);

    if(lista_personas == NULL){
        printf("No hay memoria suficiente para empezar a cargar los datos.\n");
        exit(1);
    }else{

        cargar_personas(lista_personas, n);
        mostrar_personas(lista_personas, 0, n);
    }
    free((void*)lista_personas);

    return 0;
}
