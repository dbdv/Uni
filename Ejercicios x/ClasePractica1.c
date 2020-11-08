#include<stdio.h>
int main(){

int letra, i, j=0;
char imp;
printf("Ingrese la cant de letras(1-26): ");
scanf("%i",&letra);
while(letra<0||letra>26){
    printf("Debe ser un numero entre 1-26: ");
    scanf("%i",&letra);
}
for(i=0;i<letra;i++){
    imp=j+65;
    printf("%c",imp);
    j++;
}

return 0;
}
