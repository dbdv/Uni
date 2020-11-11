
#include<stdio.h>

float suma(float array[], int i){
    if(i == 0)
        return array[i];
    else
        return suma(array, i-1)+array[i];
}

int main(){
    float array[]={1.5, 3.4, 2.1}, total;
    int i = sizeof(array)/sizeof(float);

    printf("La suma total es: %.2f", suma(array, i));

    return 0;
}
