#include<stdio.h>

#define cant_prod 10

typedef struct producto{
    char tipo[15];
    char marca[15];
    float precio_lista;
}producto;

void CargaPrecio(producto []);
void CargaPromo(producto [], float []);
void MuestraPrecios(producto [], float []);

int main(){

    producto listaNormal[cant_prod];
    float listaPromo[cant_prod];

    CargaPrecio(listaNormal);
    CargaPromo(listaNormal,listaPromo);
    MuestraPrecios(listaNormal,listaPromo);

return 0;}

void CargaPrecio(producto lista[]){
    for(int i=0; i<cant_prod; i++){
        printf("Ingrese el tipo de producto: ");
        scanf("%14s",lista[i].tipo);
        printf("Ingrese la marca del producto: ");
        scanf("%14s",lista[i].marca);
        do{
            int control=0;
            if(control) printf("El valor ingresado es invalido. Pruebe nuevamente\n");
            control++;

            printf("Ingrese el precio lista del producto:");
            scanf("%f",lista[i].precio_lista);
        }while(lista[i].precio_lista < 0);
    }
}

void CargaPromo(producto lista[], float promo[]){
    for(int i=0; i<cant_prod; i++) promo[i] = lista[i].precio_lista * 0.85;
}

void MuestraPrecios(producto lista[], float promo[]){
    printf("Producto\tMarca\tPrecio lista\tPrecio promo");
    for(int i=0; i<cant_prod; i++){
        printf("%s\t%s\t%.2f\t%.2f",lista[i].tipo,lista[i].marca,lista[i].precio_lista,promo[i]);
    }
}
