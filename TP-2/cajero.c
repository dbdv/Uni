#include<stdio.h>
#include<stdlib.h>

void Menu(float *saldo);
void Consultar_saldo(float *saldo);
void Retirar_dinero(float *saldo);
void Depositar_dinero(float *saldo);

int main(){

    float saldo=5000;
    Menu(&saldo);

return 0;
}

void Menu(float *saldo){
    int op;

    printf("Bienvenido al Cajero Virtual en C\nSeleccione una operacion:\n<1> Consultar Saldo\n<2> Retirar Dinero\n<3> Depositar Dinero\n<4> Salir\n->");
    scanf("%i",&op);
    switch(op){
        case 1: Consultar_saldo(saldo); break;
        case 2: Retirar_dinero(saldo); break;
        case 3: Depositar_dinero(saldo); break;
        case 4: break;
        default: printf("Debe elegir una opcion válida\n"); Menu(saldo);
    }
}

void Consultar_saldo(float *saldo){
    printf("Su saldo disponible es %.2f\n",*saldo);
    printf("Operacion realizada con exito\n\n");
    Menu(saldo);
}

void Retirar_dinero(float *saldo){
    float retiro;
    do{ printf("DISPONIBLE:%.2f\nEscriba el monto retirar:",*saldo);
        scanf("%f",&retiro);
        if(retiro > *saldo){
            printf("ERROR\n");
        }
    }while(retiro > *saldo);

    *saldo = *saldo - retiro;
    //  system("cls");
    printf("Operacion realizada con exito\n\n");
    Menu(saldo);
}

void Depositar_dinero(float *saldo){
    float deposito;
    printf("Cuanto dinero va a depositar:");
    scanf("%f",&deposito);
    *saldo = *saldo + deposito;
    printf("Operacion realizada con exito\n\n");
    Menu(saldo);
}
