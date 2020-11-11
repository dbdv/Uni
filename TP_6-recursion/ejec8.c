#include<stdio.h>
#include<string.h>
#define N 30
#define MAX 100

typedef char string[N]

typedef struct{
    int dia, mes, agno;
}fecha;

typedef struct {
	string tipo;
	long num;
}documento;

typedef struct{
	string calle_nom, localidad;
	short cod_postal, calle_num;
	long tel;
}direccion;

typedef struct{
	string nombre;
	fecha fechaNac;
	documento docu;
	direccion direc;
	short estCivil, cantHijos, sexo;
}empleado;

int main(){


return 0;}
