#include<stdio.h>
#include<string.h>

#define max 30
#define maxAulas 20

typedef struct {
	char marca[max];
	char color[max];
	int control;
}proyector;

typedef struct {
	short id, cantMesas, cantSillas, cantPizarras, tipo;
	char ubic[max];
	proyector proyecAula;
}aula;

void ingresaDatos(aula [], int *);

int main(){

	aula aulas[maxAulas];

return 0;}

void ingresaDatos(aula aulas[], int *cant){
  printf("Ingrese el ID de aula\n-->");
  do{
    scanf("%i",&aulas.id);
    if(aulas.id < 0) printf("El ID ingresado es inv%clido. Pruebe nuevamente\n-->",160);
  while(aulas.id < 0); 
