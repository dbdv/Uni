#include<stdio.h>
#include<stdlib.h>

void n_naturales(int);

int main(){
    int n;

    printf("Numero: ");
    do{
        scanf("%i", &n);
    }while(n < 1);

    n_naturales(n);
    getchar();

    return 0;
}

void n_naturales(int n){
    if(n == 0)
        printf("%i", n);
    else{
        n_naturales(n-1);
        printf("%i", n);
    }
}
