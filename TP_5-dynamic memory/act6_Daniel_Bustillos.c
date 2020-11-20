#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10
#define N 8

typedef struct{
    char patente[N];
}patentes;

void carga_patente(patentes []);
int cant_localizacion_pat(patentes [], char []);
void modificar_pat(patentes []);

int main(){
    int op, n;
    char buscar[N];
    patentes* pat_vehiculos;

    pat_vehiculos = (patentes*) malloc(sizeof(patentes)*MAX);

    if(pat_vehiculos == NULL){
        printf("No  hay memoria suficiente.\n");
        exit(1);
    }else{
        printf("CARGA DE PATENTES\n");
        carga_patente(pat_vehiculos);
        sleep(1);
        system("cls");

        /*MENU*/
        do{
            printf("MENU DE OPCIONES\n1->Saber si una patente se encuentra registrada.\n2->Modificar una patente del registro.\n3->Salir\n: ");
            scanf("%i", &op);

            switch(op){
                    case 1:
                        printf("Patente a buscar: ");
                        scanf("%s", buscar);

                        n = cant_localizacion_pat(pat_vehiculos, buscar);

                        if(!n)
                            printf("La patente que busca no se encuentra en  el registro.\n");
                        else
                            printf("La patente se ha encontrado %i veces en el registro.\n", n);
                        break;
                    case 2:
                        modificar_pat(pat_vehiculos);
                        break;
                    case 3:
                        printf("Adios.\n");
                        break;
                    default:
                        printf("No es una opcion.\nIntente de nuevo: ");
                        break;
            }

        }while(op != 3);
    }

    return 0;
}

void carga_patente(patentes arreglo[]){
    int i, j, op, kk[N-1], control = 0;
    for(i = 0; i < MAX; i++){

        printf("\nTipo de patente\n1->Formato AAA XXX\n2->Formato AAXXXAA\n: ");
        do{
            fflush(stdin);
            scanf("%i", &op);
            if(op < 1 || op > 2)
                printf("No es una de las opciones. Intente nuevamente.\n: ");
        }while(op != 1 && op != 2);

        if(op == 1){
            printf("\nPatente de formato AAA XXX(letras en mayusculas)\n: ");
            do{
                control = 0;
                fflush(stdin);
                scanf("%[^\n]s", arreglo[i].patente);
                printf("Ingresaste: %s\n", arreglo[i].patente);

                for(j = 0; j < N-1; j++){
                    kk[j] = arreglo[i].patente[j];
                    if(j == 3){
                        if(kk[j] != 32) control = 1;
                    }else if(j <3){
                        if(kk[j] < 65 || kk[j] >90) control = 1;}
                    else{
                        if(kk[j] < 48 || kk[j] > 57) control = 1;}
                }

                if(control) printf("Patente incorrecta.\nIntente de nuevo: ");

            }while(control);
        }else if(op == 2){
            printf("\nPatente de formato AAXXXAA(letras en mayusculas)\n: ");
            do{
                control = 0;
                fflush(stdin);
                scanf("%[^\n]s", arreglo[i].patente);
                printf("Ingresaste: %s\n", arreglo[i].patente);

                for(j = 0; j < N-1; j++){
                    kk[j] = arreglo[i].patente[j];
                    if(j < 2 || j > 4){
                        if(kk[j] < 65 || kk[j] >90)
                            control = 1;
                    }else if(kk[j] < 48 || kk[j] > 57) control = 1;
                }

                if(control) printf("Patente incorrecta.\nIntente de nuevo: ");
            }while(control);
        }
    }
}

int cant_localizacion_pat(patentes arreglo[], char buscar[]){
    int i, total=0;

    for(i = 0; i < MAX; i++)
        if(!strcmp(arreglo[i].patente, buscar))
            total ++;

    return total;
}

void modificar_pat(patentes arreglo[]){
    char modificar[N];
    int i, j=0, n;

    printf("Patente a modificar: ");
    getchar();
    scanf("%[^\n]s", modificar);

    n = cant_localizacion_pat(arreglo, modificar);

    for(i = 0; j < n; i++)
        if(!strcmp(arreglo[i].patente, modificar)){
            strcpy(arreglo[i].patente, "AAXXXAA");
            j++;
        };

    if(!n)
        printf("La patente que intenta modificar no esta cargada en  el sistema.\n");
    else
        printf("La patente se ha modificado con exito.\n");
}

