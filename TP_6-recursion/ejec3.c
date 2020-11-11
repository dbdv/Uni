#include<stdio.h>

int busqueda_recursiva(int array[], int i, int x){
    if(i == -1){
        return -1;
    }else{
        if(array[i] == x)
            return i;
        else
            return busqueda_recursiva(array, i-1, x);
    }
}

int main(){
    int array[] = {1,2,3,4,5}, x, i;
    i = sizeof(array) / sizeof(int);

    printf("Numero a buscar: ");
    scanf("%i", &x);

    printf("Resultado de la busqueda: %i", busqueda_recursiva(array, i, x));

    return 0;
}
