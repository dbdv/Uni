#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ingresantes.h"
#include "listas.h"

/*
a->160
e->130
i->161
o->162
u->163
*/

void cargar_usuario(list_ingresante *lista)
{
    long dni;
    int aux1;
    char aux[15];
    ingresante pepe;

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(aux);
    carga_nom(&pepe,aux);

    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(aux);
    carga_ape(&pepe,aux);

    printf("Ingrese su cel: ");
    fflush(stdin);
    gets(aux);
    /*AGREGAR CONTROL*/
    carga_cel(&pepe,aux);

    printf("Ingese su dni: ");
    do
    {
        scanf("%ld", &dni);
        if(dni < 10000000 || dni > 99999999)
            printf("El DNI que quiere ingresar es incorrecto.\n");
    }while(dni < 10000000 || dni > 99999999);
    carga_dni(&pepe, dni);

}

void admin_menu(list_ingresante *lista)
{
    int option;
    printf("\tMENU DE ADMINISTRADOR\n");
    printf("1.Modificar el estado del ingreso de un ingresante.\t2.Dar de baja a un usuario.\t3.Buscar persona.\t4.Ver estado de un usuario.\t0.Salir del men%c\t10.Salir del programa.\n", 163);
    do
    {
        scanf("%i", &option);
        if(option < 0 || option > 4)
            printf("No ingres%c una opci%cn v%clida. Intente nuevamente.\n",162,162,160);
    }while(option != 0);

    switch(option)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 10:
        printf("Hasta luego!\n");
        return 0;
    }
}

void anotar_carreras(char *carreras[], ingresante *ingre)
{
    int option, id, i;

    printf("\tINSCRIPCION A CARRERAS.\n");
    printf("1.Carreras de pregrado\t2.Carreras de grado.\t0.Salir del programa.\n");
    do
    {
        scanf("%i", &option);
        if(option <0 || option >2)
            printf("No seleccion%c una opci%cn v%clida. Intente nuevamente.\n",162,162,160);
    }while(option < 0 || option >2);
    if(option == 1)
        {
            for(i=0; i<=10; i++)
                printf("%s", carreras[i]);
        }
    else
    {
        for(i=11; i<=25; i++)
            printf("%s",carreras[i]);
    }

    printf("Escriba el ID de la materia a la que se quiere inscribir: ");
    do
    {
        scanf("%i", &id);
        if(id<0 || id > 23)
            printf("No es un ID v%clido. Intente nuevamente.\n",162);
        else if(id == 10)
            printf("Esta carrera no est%c disponible en a%cos impares.\nIntente nuevamente.\nID:",162,164);
    }while(id<0 || id > 23 || id == 10);

    carga_carrera(ingre,id);
    printf("%s",carreras[ingre->ID_carr[0]]);

    //SOLUCIONAR OPERACION CARGAR CARRERA EN LISTA.H
}
void usuario_menu(char *carreras[])
{
    int option;
    char key;
    ingresante ingre;

    printf("MENU DE USUARIOS\n");
    do
    {
        do
        {
            printf("Elija operacion:\n1-Inscribirse a carrera\t0. Salir\n");
            /*key=getch();
            option=(int)key;*/
            scanf("%d", &option);
            if(option<0 || option>2)
                printf("No ha seleccionado una opci%cn v%clida. Intente nuevamente.\n", 162, 160);
         }while(option < 0 || option > 3);
         switch(option)
         {
            case 1: //FUNCION INSCRIBIR
               anotar_carreras(carreras, &ingre);
               break;
        }
    }while(option != 0);
}
int main()
{
    FILE *f;
    f = fopen("carreras.txt", "r");

    int option, i;
    char key, pssw[10], pssw1[10], *carreras[25];

    for(i=0; i<25;i++)
        carreras[i] = (char *) malloc(sizeof(char)*50);
    strcpy(pssw, "admin");

    for(i=0; i<=24; i++)
        fgets(carreras[i],500,f);

    printf("\t\tPRACTICO DE MAQUINA INTEGRADOR\n");
    printf("\t\tSISTEMA UNSL\n");
    printf("\tCarrera: Ingenier%ca en inform%ctica\n\tIntegrantes: Diaz Emiliano-Bustillos Daniel\n\n", 161,160);

    printf("1.Admin.\t2.Usuario.\t3.Presione 0 para salir.\n");
    do
    {
        /*fflush(stdin);
        key = getch();
        option = (int)key;*/
        scanf("%i", &option);
        if(option < 0 || option > 2)
            printf("Tiene que elegir una de las opciones disponibles. Intente nuevamente.\n");
    }while(option <0 || option >2);

    switch(option)
    {
    case 1:
        printf("Ingerese la contrase%ca: ", 164);
        do
        {
            fflush(stdin);
            gets(pssw1);
            if(!strcmp(pssw,pssw1))
            {

            }else
            {
                printf("Contrase%ca incorrecta. Intente nuevamente.\n");
            }

        }while(strcmp(pssw,pssw1) != 0);
        case 2:
            usuario_menu(carreras);
            break;
    }




    return 0;
}
