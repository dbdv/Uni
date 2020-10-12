#include<stdio.h>
#include<windows.h>

void Menu(float *);
void Consultar_saldo(float *);
void Retirar_dinero(float *);
void Depositar_dinero(float *);
int Help(float *);

int main(){

    int registro=0;
    float saldo=5000;
    Menu(&saldo);

return 0;
}

void Menu(float *saldo){
    int op;

    printf("\nBienvenido al Cajero Virtual en C\n\tSeleccione una operacion:\n\t<1> Consultar Saldo\n\t<2> Retirar Dinero\n\t<3> Depositar Dinero\n\t<4> Help\n\t<5> Salir\n->");
    scanf("%i",&op);
    switch(op){
        case 1: Consultar_saldo(saldo); break;
        case 2: Retirar_dinero(saldo); break;
        case 3: Depositar_dinero(saldo); break;
        case 4: printf("\tEstado: %i\n\n",Help(saldo)); Consultar_saldo(saldo); Sleep(2000); Menu(saldo); break;
        case 5: printf("Adios, vuelva pronto\n"); Sleep(2000); break;
        default: printf("\n\tERROR\n\tDebe elegir una opcion valida\n");Sleep(2000); Menu(saldo);
    }
}

void Consultar_saldo(float *saldo){
    printf("\tDISPONIBLE: %.2f\n",*saldo);
    printf("\tOperacion realizada con exito\n");
    Sleep(2000);
    Menu(saldo);
}

void Retirar_dinero(float *saldo){
    float retiro;
    do{ printf("\tDISPONIBLE:%.2f\nRETIRO:",*saldo);
        scanf("%f",&retiro);
        if(retiro > *saldo || retiro <0)
            printf("\n\tERROR\n");
            Sleep(2000);
    }while(retiro > *saldo || retiro < 0);

    *saldo -= retiro;
    //  system("cls");
    printf("\tOperacion realizada con exito\n");
    Sleep(2000);
    Consultar_saldo(saldo);
    Menu(saldo);
}

void Depositar_dinero(float *saldo){
    float deposito;
    do{ printf("DEPOSITO:");
        scanf("%f",&deposito);
        if(deposito <= 0){
            printf("\n\tERROR\n");
            Sleep(2000);
        }else{
            *saldo += deposito;
        }
    }while(deposito <= 0);
    printf("\tOperacion realizada con exito\n\n");
    Sleep(2000);
    Consultar_saldo(saldo);
    Menu(saldo);
}

int Help(float *saldo){

    if(*saldo < 1000){
        *saldo += 2000;
        printf("\n\tOperacion realizada con exito\n");
        return 1;
    }else{
        printf("\tNo puede solicitar un prestamo ya que posee 1000 o mas en cuenta\n");
        return 0;
        }
}
