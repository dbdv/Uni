#include<stdio.h>

void invertir_array(char array[], int n){
    if(n == 0)
        printf("%c", array[n]);
    else{
        printf("%c", array[n]);
        invertir_array(array, n-1);
    }
}

int main(){
    char array[]={'h','o','l','a'};
    int n = sizeof(array) / sizeof(char);

    invertir_array(array, n);

    return 0;
}
