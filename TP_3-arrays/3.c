#include<stdio.h>

#define tam 20

void IngresaNum(int [], int *);
int MostrarMenor(int [], int, int *);

int main(){
    int nums[tam], cant, cont=0;
    IngresaNum(nums, &cant);
    printf("\nEl menor numero es %i",MostrarMenor(nums, cant, &cont));
    printf(" esta en la posicion %i",cont);

return 0;
}

void IngresaNum(int arr[], int *cant){

    do{
        printf("Cuantos numeros va a ingresar(max 20): ");
        scanf("%i",cant);
    }while(*cant < 0 || *cant > 20);

    for(int i = 0; i < *cant; i++){
        printf("Ingrese el %i numero: ",i+1);
        scanf("%i", arr+i);
    }
}

int MostrarMenor(int arr[], int cant, int *cont){

    int menor = *arr;

    for(int i = 1; i < cant; i++){
        if(menor > *(arr+i)){
            menor = *(arr+i);
            *cont = *cont + 1;}
    }
return menor;}
