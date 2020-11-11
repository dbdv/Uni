#include<stdio.h>

int suma_n_naturales(int n){
    if(n == 0)
        return 0;
    else
        return suma_n_naturales(n-1) + n;
}

int main(){
    int n;

    printf("Numero: ");
    do{
        scanf("%i", &n);
        if(n < 1)
            printf("El numero que ingrese debe ser natural.\nNumero: ");
    }while(n < 1);

    printf("La suma de los primeros %i naturales es %i.", n, suma_n_naturales(n));

    return 0;
}
