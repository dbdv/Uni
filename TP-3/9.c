#include<stdio.h>

#define cant_banc 6

typedef struct dolar{
    char nombre[10];
    float compra;
    float venta;
}dolar;

void Promedio(dolar []);

int main(){
    dolar bancos[6];

    for(int i=0; i<cant_banc; i++){
        printf("Ingrese el nombre del %i%c banco: ",i+1,167);
        scanf("%9s",bancos[i].nombre);
        do{
            int control=0;
            if(control) printf("El valor ingresado es invalido. Pruebe nuevamente\n");
            control++;

            printf("Compra-->");
            scanf("%f", &bancos[i].compra);
        }while(bancos[i].compra < 0);
        do{
            int control=0;
            if(control) printf("El valor ingresado es invalido. Pruebe nuevamente\n");
            control++;

            printf("Venta-->");
            scanf("%f",&bancos[i].venta);
        }while(bancos[i].venta < 0);
    }
    Promedio(bancos);

return 0;}

void Promedio(dolar bancos[]){

    float compra=0, venta=0;

    for(int i=0; i<cant_banc; i++){
        compra += bancos[i].compra;
        venta += bancos[i].venta;
    }

    printf("El promedio de compra es: %.2f\nEl promedio de venta es: %.2f",compra/cant_banc,venta/cant_banc);
}
