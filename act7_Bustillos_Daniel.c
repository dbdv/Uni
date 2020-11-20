#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nomyape[50];
    int edad;
    int riesgo; /*1 si es riesgo, 0 si no es riesgo*/
}persona;

void cargar_n_personas(persona [], int);
void imprimir_datos(persona [], int, int);

int main(){
    int t, n;
    persona* arreglo;

    printf("Ingrese el tamagno del arreglo: ");
    do{
        fflush(stdin);
        scanf("%i", &t);
        if(t < 1) printf("Tamagno no valido.\nIntente nuevamente: ");
    }while(t < 1);

    arreglo = (persona*) malloc(sizeof(persona)*t);

    if(arreglo == NULL){
        printf("No hay memoria disponible.\n");
        exit(1);
    }else{
        printf("%i espacios disponibles. Cantidad de personas a cargar: ", t);
        do{
            getchar();
            scanf("%i", &n);
            if(n < 0 || n > t) printf("La cantidad que quiere ingresar no es valida, recuerde que tiene %i espacios disponibles.\nIntente de nuevo: ", t);
        }while(n < 0 || n > t);

        cargar_n_personas(arreglo, n);
        printf("Pacientes mayores de 60.\n");
        imprimir_datos(arreglo, 0, n);
    }
    printf("%s\n",arreglo[1].nomyape);

    free((void*)arreglo);

    printf("%s",arreglo[1].nomyape);
    return 0;
}

void cargar_n_personas(persona arreglo[], int n){
    int i;
    for(i=0; i < n; i++){
        printf("Ingrese nombre y apellido: ");
        fflush(stdin);
        //scanf("%s[^\n]", arreglo[i].nomyape);
        gets(arreglo[i].nomyape);

        printf("Edad: ");
        do{
            fflush(stdin);
            scanf("%i", &arreglo[i].edad);
            if(arreglo[i].edad < 1 || arreglo[i].edad >180) printf("El dato que ingreso no es valido.\nIntente nuevamente: ");
        }while(arreglo[i].edad < 1 || arreglo[i].edad >180);

        printf("Paciente de riesgo?\n0->No\n1->Si\n:");
        do{
            fflush(stdin);
            scanf("%i", &arreglo[i].riesgo);
            if(arreglo[i].riesgo < 0 || arreglo[i].riesgo > 1) printf("Tiene que elegir una de las opciones presentadas. Intente de nuevo.\nPaciente de riesgo?\n0->No\n1->Si\n:");
        }while(arreglo[i].riesgo < 0 || arreglo[i].riesgo > 1);
    }
}
void imprimir_datos(persona arreglo[], int p, int n){
    if(p == n)
        printf("Fin de lista.\n");
    else{
        if(arreglo[p].edad > 60){
            printf("Nombre y apellido: %s.\n", arreglo[p].nomyape);
            printf("Edad: %i.\n", arreglo[p].edad);
            if(arreglo[p].riesgo)
                printf("Paciente de riesgo.\n");
            else
                printf("No es paciente de riesgo.\n");
        }else
            imprimir_datos(arreglo, p+1, n);
    }
}
