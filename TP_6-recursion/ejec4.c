
#include<stdio.h>
#include<string.h>

int compara_string(char string1[], char string2[], int i){
    if(i == -1)
        return 1;
    else{
        if(string1[i] == string2[i])
            compara_string(string1, string2, i-1);
        else
            return 0;
    }
}

int main(){
    char string1[]={"el pepe y"}, string2[]={"el pepe y"};
    int i;

    if(strlen(string1) == strlen(string2)){
        i = strlen(string1);
        if(compara_string(string1, string2, i))
            printf("Los strings son iguales.\n");
        else
            printf("Los strings son diferentes.\n");
    }else
        printf("Los strings tienen longitudes diferentes, no se pueden comparar.\n");
}
