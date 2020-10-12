#include<stdio.h>

#define tam 20

void IngresaDatos(int [], int *);
int Busqueda(int [], int *, int *);

int main(){
    int arreglo[tam], num, cant;

    IngresaDatos(arreglo, &cant);

    if(Busqueda(arreglo, &num, &cant)) printf("Se encuentra el numero %i en el arreglo\n",num);
    else printf("No se encuentra el numero %i en el arreglo\n",num);

return 0;
}

void IngresaDatos(int arreglo[], int *cant){

    do{
        printf("Cuantos numeros va a ingresar(max 20): ");
        scanf("%i",cant);

        if(*cant <= 0 || *cant > tam) printf("Error\n");

    }while(*cant <= 0 || *cant > tam);

    for(int i=0; i < *cant; i++){
        printf("ingrese el %i numero: ",i+1);
        scanf("%i",arreglo+i);
    }
}

int Busqueda(int arreglo[], int *num, int *cant){

    printf("Ingrese el numero a buscar: ");
    scanf("%i",num);


    for(int i = 0; i < *cant; i++){
        if(*num == arreglo[i]) return 1;
    }

return 0;
}
