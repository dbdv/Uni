#include<stdio.h>

int mayor_int(int array[], int n, int aux){
    if(n == 0)
        return aux;
    else{
        if(aux < array[n-1]){
            aux = array[n-1];
            mayor_int(array, n-1, aux);
        }else
        mayor_int(array, n-1, aux);
    }
}

int main(){
    int array[]={1,32,66,15,63,70}, n = sizeof(array) / sizeof(int);

    printf("El mayor en el arreglo es: %i", mayor_int(array, n, array[n]));

}
