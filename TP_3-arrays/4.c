#include<stdio.h>

#define tam 20

void IngresaChar(char [], int *);
void MostrarChar(char [], int);
void CambioChar(char [], int *);

int main(){
    int cant;
    char MiCadena[tam];
    IngresaChar(MiCadena, &cant);
    MostrarChar(MiCadena, cant);
    CambioChar(MiCadena, cant);
    MostrarChar(MiCadena, cant);

return 0;
}

void IngresaChar(char arr[], int *cant){

    do{
        printf("Cuantos caracteres va a ingresar: ");
        scanf("%i",cant);

        if(*cant <= 0 || *cant > tam) printf("Error\n");

    }while(*cant <= 0 || *cant > tam);

    for(int i=0; i<*cant; i++){
        printf("Ingrese el %i%c caracter",i+1,167);
        scanf("%c",&arr[i]);
    }

}

void MostrarChar(char arr[], int cant){
    for(int i = 0; i < cant; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

void CambioChar(char arr[], int *cant){

    char aux;
    int posc;

    printf("\nIngrese el caracter que quiere agregar: ");
    getchar();
    scanf("%c",&aux);
    do{
        printf("\nIngrese la posicion donde lo quiere agregar (1-%i): ",*cant);
        scanf("%i",&posc);
        if(posc < 1 || posc > *cant) printf("Ha ingresado una posicion invalida\n");
    }while(posc < 1 || posc > *cant);
    for(int i = *cant; i > posc-1; i--){
        arr[i] = arr[i-1];
    }

    arr[posc-1] = aux;

    if(*cant < tam) *cant++;
}
