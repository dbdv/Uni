#include<stdio.h>
#include<string.h>
#define max 10
#define st 30
typedef char string[st];

struct datos_salud{
    string nombre;
    string apellido, sexo;
    int fecha[3];
    float peso, altura;
};

void load_info(struct datos_salud);
void show_info(struct datos_salud);
void imc_calc(struct datos_salud);

int main(){
  struct datos_salud persona;
  load_info(persona);
  show_info(persona);
return 0;}

void load_info(struct datos_salud persona){

  string sexo[]={"femenino\0", "masculino\0"};
  printf("Ingrese su nombre: ");
  fgets(persona.nombre, st, stdin);
  printf("Ingrese su apellido: "); 
  fgets(persona.apellido, st, stdin);
  printf("Ingrese masculino o femenino: ");
  do{
    fgets(persona.sexo, st, stdin);
    if(strcmp(persona.sexo, sexo[0]) && strcmp(persona.sexo, sexo[1])) printf("Ingreso invalido. Intente nuevamente: ");
  }while(strcmp(persona.sexo, sexo[0]) && strcmp(persona.sexo, sexo[1]));
  printf("Ingrese su fecha de nacimiento usando de divisor un espacio: ");
  do{
    scanf("%i,%i,%i", &persona.fecha[0], &persona.fecha[1], &persona.fecha[2]);
    if(persona.fecha[0] < 0 || persona.fecha[1] < 0 || persona.fecha[2] < 0 || persona.fecha[0] > 31 || persona.fecha[1] > 12) printf("Ingreso una fecha invalida. Intente de nuevo: ");
  }while(persona.fecha[0] < 0 || persona.fecha[1] < 0 || persona.fecha[2] < 0 || persona.fecha[0] > 31 || persona.fecha[1] > 12);
  printf("Ingrese su altura en metros: ");
  do{
    scanf("%f", &persona.altura);
    if(persona.altura <= 0) printf("Ingreso una altura invalida. Intente nuevamente: ");
  }while(persona.altura <= 0);
  printf("Ingrese su peso en kg: ");
  do{
    scanf("%f", &persona.peso);
    if(persona.peso <= 0) printf("Ingreso un dato invalido. Intente de nuevo: ");
  }while(persona.peso <= 0);
 }

void show_info(struct datos_salud persona){
  printf("Nombre: %s\nApellido: %s\nFecha de nacimiento %i-%i-%i\nSexo: %s\nAltura: %.2f\nPeso: %.2f\n", persona.nombre, persona.apellido, persona.fecha[0], persona.fecha[1], persona.fecha[2], persona.sexo, persona.altura, persona.peso);
  imc_calc(persona);
 }

void imc_calc(struct datos_salud persona){
  float imc = persona.peso /(persona.altura * persona.altura);
  if(imc < 18.5) printf("IMC: %.2f. Bajo peso\n", imc);
  else if(imc >= 18.5 && imc < 25) printf("IMC: %.2f. Peso normal\n", imc);
  else if(imc >= 25 && imc < 30) printf("IMC: %.2f. Sobrepeso",imc);
  else printf("IMC: %.2f. Obesidad", imc);
}
