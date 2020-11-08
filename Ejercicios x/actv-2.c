#include<stdio.h>

#define dolar 76.18
#define euro 89.49
#define real 13.50

int main(){

int o;
float peso;

printf("Ingrese un monto en pesos: ");
scanf("%f",&peso);

printf("seleccione el tipo de cambio\n1->Dolar\n2->Euro\n3->Real\n");
scanf("%i",&o);

while(o<1 || o>3){
    printf("Seleccione una opcion válida!!");
    printf("seleccione el tipo de cambio\n1->Dolar\n2->Euro\n3->Real\n");
    scanf("%i",&o);
}
printf("El equivalente es:");

switch(o){
    case 1:printf("%.2f",peso/dolar);
    break;
    case 2:printf("%.2f",peso/euro);
    break;
    case 3:printf("%.2f",peso/real);
    break;
}
return 0;}
