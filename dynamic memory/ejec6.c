#include<stdio.h>
#include<stdlib.h>

#define N 10

typedef struct{
  int dia, mes, agno;
}Fecha;

typedef struct{
  char nom[30];
  int Hijos, TipoDoc;/*1=DNI, 2=PAS, 3=CF, 4=CIPE*/
  long int NroDoc;
  Fecha Nacim;
}Empleado;

int repetido(Empleado* [], int);
void cargar(Empleado* [], int*);

int main(){
  int cant;
  Empleado* arr[N];

  for(cant=0; cant < N; cant++){
    arr[cant]=(Empleado*)malloc(sizeof(Empleado));
    if(arr[cant] == NULL){
      printf("No hay suficiente memoria.\n");
      exit(1);
    }
  }

  cant=0;

  cargar(arr, &cant);

  for(cant=0; cant < N; cant++) free((void*)arr[cant]);

  return 0;
}

int repetido(Empleado* arr[], int i){
  if(i == 0) return 0;
  else{
    if((*arr[i]).NroDoc == (*arr[i]).NroDoc){
      return 1;
      repetido(arr, i-1);
    }
  }
}

void cargar(Empleado* arr[], int* cant){
  int aux = *cant, control = 0, i;

  printf("Tiene disponibles %i lugares.\nCantidad a cargar: ", N-aux);
  do{
    scanf("%d", cant);
    if(*cant < 0 || *cant > N-aux) printf("Cantidad incorrecta. Ingrese nuevamente.\n:");
  }while(*cant < 0 || *cant > N-aux);

  for(i = 0; i < *cant; i++){
    printf("Nombre: ");
    fflush(stdin);
    scanf("%s^{\n}", (*arr[i]).nom);
    printf("%s",(*arr[i]).nom);

    printf("Tipo de documento(1=DNI, 2=PAS, 3=CF, 4=CIPE): ");
    do{
      scanf("%i",&(*arr[i]).TipoDoc);
      if((*arr[i]).TipoDoc < 1 || (*arr[i]).TipoDoc > 4) printf("No es una de las opciones. Intente de nuevo.\n:");
    }while((*arr[i]).TipoDoc < 1 || (*arr[i]).TipoDoc > 4);

    printf("Nro de documento: ");
    do{
      scanf("%li", &(*arr[i]).NroDoc);
      if((*arr[i]).NroDoc < 10000000 || (*arr[i]).NroDoc > 99999999){
        printf("Documento no valido. Intente de nuevo\n:");
        control =1;
      }else if(repetido(arr, i)){
        printf("Ese documento ya ha sido ingresado. Intente de neuvo.\n:");
        control = 1;
      }
    }while(control);
  }
}
