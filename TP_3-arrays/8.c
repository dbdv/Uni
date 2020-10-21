#include<stdio.h>

#define cantN 13

void CargaNota(float []);
void MuestraNota(float []);
int Aplazos(float []);

int main(void){
    float notas[cantN];
    CargaNota(notas);
    MuestraNota(notas);
    printf("Cantidad de aplazos: %i\n",Aplazos(notas));

return 0;}

void CargaNota(float notas[]){
    for(int i = 0; i < cantN; i++){
        do{
            printf("Ingrese la %i%c nota\n-->",i+1,167);
            scanf("%f",&notas[i]);
            if(notas[i]<0 || notas[i]>10) printf("Ha ingresado una nota invalida\n");
        }while(notas[i]<0 || notas[i]>10);
    }
}

void MuestraNota(float notas[]){
    for(int i=0; i<cantN; i++){
        printf("%i%cnota : %.2f\n",i+1,167,notas[i]);
    }
}

int Aplazos(float notas[]){
    int contador=0;
    for(int i=0; i<cantN; i++) if(notas[i]<7) contador++;
    if(contador >= 7) printf("Alta posibilidad de repetir\n");
return contador;
}
