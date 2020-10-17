#include<stdio.h>
#include<string.h>

#define tam 20

int main(){
    char cadena1[tam], cadena2[tam], mayor[tam];

    printf("Ingrese la primer cadena\n-->");
    scanf("%19s[^\n]",cadena1);

    printf("Ingrese la segunda cadena\n-->");
    scanf("%19s[^\n]",cadena2);

    if(strcmp(cadena1,cadena2) > 0){
        printf("El mayor(alfabeticamente) es %s\n", cadena1);
        strcpy(mayor,cadena1);
    }else if(strcmp(cadena1, cadena2) < 0){
        printf("El mayor es %s\n", cadena2);
        strcpy(mayor,cadena2);
    }else{
        printf("Las cadenas son iguales\n");
    }

    printf("La cadena 1 tiene %i caracteres\n", strlen(cadena1));
    printf("La cadena 2 tiene %i caracteres\n", strlen(cadena2));


return 0;}

