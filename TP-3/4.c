#include<stdio.h>

#define tam 20

void IngresaChar(char [], int *);
void MostrarChar(char [], int);
void CambioChar(char [], int);

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
        printf("Cuan larga va a ser su cadena(max 20 caracteres): ");
        scanf("%i",cant);

        if(*cant <= 0 || *cant > tam) printf("Error\n");

    }while(*cant <= 0 || *cant > tam);

    printf("Ingrese su cadena: ");
    scanf("%s",arr);

}

void MostrarChar(char arr[], int cant){
    for(int i = 0; i < cant; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

void CambioChar(char arr[], int cant){

    char aux;
    int posc;

    printf("\nIngrese el caracter que quiere agregar: ");
    getchar();
    scanf("%c",&aux);
    do{
        printf("\nIngrese la posicion donde lo quiere agregar (1-%i): ",cant);
        scanf("%i",&posc);
    }while(posc < 1 || posc > cant);
    for(int i = cant; i > posc-1; i--){
        arr[i] = arr[i-1];
    }

    arr[posc-1] = aux;
}
