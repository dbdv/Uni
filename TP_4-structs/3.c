#include<stdio.h>

#define max 30
#define maxAulas 20

typedef struct {
	char marca[max];
	char color[max];
	int control;
}proyector;

typedef struct {
	short id, cantMesas, cantSillas, cantPizarras, tipo;
	char ubic[max];
	proyector proyecAula;
}aula;

void ingresaDatos(aula [], int *);
void imprimirDatos(aula [], int);
void menu(aula [], int *);

int main(){

	aula aulas[maxAulas];
	int cant=0;

	menu(aulas, &cant);

return 0;}

void menu(aula aulas[], int *cant){
    int selec;
    printf("Elija una operaci%cn a realizar.\n\t1-->Cargar aulas\n\t2-->Mostrar aulas\n\t3-->Salir\n-->",162);
    scanf("%i", &selec);
    switch(selec){
        case 1: ingresaDatos(aulas, cant);
            break;
        case 2: if(*cant) imprimirDatos(aulas, *cant);
                else{
                    printf("Todav%ca no tiene aulas almacenadas\n",161);
                    menu(aulas, cant);
                }
            break;
        case 3: break;
        default: printf("Debe seleccionar una opci%cn v%clida. Intente nuevamente\n",162, 160); menu(aulas, cant);
    }
}

void ingresaDatos(aula aulas[], int *cant){

    int aux = *cant, igual;

    printf("Ingrese la cantidad de aulas que va a a%cadir\n(1-%i)-->",164,maxAulas-aux);
    do{
        scanf("%i", cant);
        if(*cant <= 0 || *cant > maxAulas-aux) printf("Debe ingresar una cantidad v%clida(1-%i). Intente nuevamente.\n-->",160,maxAulas-aux);
    }while(*cant <= 0 || *cant > maxAulas-aux);

    for(int i=aux; i < *cant; i++){

        printf("Ingrese el ID de aula\n-->");
        do{
            scanf("%i",&aulas[i].id);
            if(aulas[i].id < 0) printf("El ID ingresado es inv%clido. Pruebe nuevamente\n-->",160);
            for(int j=0; j<i; j++){
                if(aulas[i].id == aulas[j].id){
                    printf("El ID que intenta ingresar ya est%c ocupado. Intente nuevamente.\n-->",160);
                    igual =1;}else igual =0;}
        }while(aulas[i].id < 0 || igual == 1);

        printf("Ingrese la ubicaci%cn\n-->", 162);
        scanf("%s", aulas[i].ubic);

        printf("Ingrese, siguiendo este orden y separadas por un espacio, la cantidad de mesas, sillas y pizarras\n-->");
        do{
            scanf("%i,%i,%i",&aulas[i].cantMesas, &aulas[i].cantSillas, &aulas[i].cantPizarras);
            if(aulas[i].cantMesas < 0 || aulas[i].cantSillas < 0 || aulas[i].cantPizarras < 0 ) printf("Debe ingresar cantidades v%clidas, pruebe nuevamente\n-->",160);
        }while(aulas[i].cantMesas < 0 || aulas[i].cantSillas < 0 || aulas[i].cantPizarras < 0 );

        printf("Ingrese el tipo de aula\n0-->Laboratorio\n1-->Conferencia\n2-->Teor%ia/Pr%cctica\n-->",161,160);
        do{
            fflush(stdin);
            scanf("%i",&aulas[i].tipo);
            if(aulas[i].tipo<0 || aulas[i].tipo > 2) printf("Debe elegir una de las opciones proporcionadas. Intente nuevamente\n-->");
        }while(aulas[i].tipo<0 || aulas[i].tipo > 2);

        printf("Ingrese, en este orden, marca del proyector, color, si tiene control 1 para si-0 para no\n-->");
        scanf("%s,%s,%i", aulas[i].proyecAula.marca, aulas[i].proyecAula.color, &aulas[i].proyecAula.control);
        while(aulas[i].proyecAula.control != 0 && aulas[i].proyecAula.control != 1){
            printf("Debe elegir 1 para si-0 para no. Intente nuevamente\n-->");
            fflush(stdin);
            scanf("%i", &aulas[i].proyecAula.control);
        }
    }

    menu(aulas, cant);
}

void imprimirDatos(aula aulas[], int cant){
    for(int i=0; i<cant; i++){
        printf("\tAULA %i%c\n",i+1,167);
        printf("ID: %i\nUbicaci%cn: %s\nTipo: %s\nCant de mesas: %i\tCant de sillas: %i\tCant de pizarras: %i\nProyector:\n\tMarca: %s\n\tColor: %s",162,
               aulas[i].id, aulas[i].ubic, aulas[i].tipo, aulas[i].cantMesas, aulas[i].cantSillas, aulas[i].cantPizarras, aulas[i].proyecAula.marca, aulas[i].proyecAula.color);
        if(aulas[i].proyecAula.control) printf("\tControl: si\n");
        else printf("\tControl: si\n");
    }

    menu(aulas, &cant);
}
