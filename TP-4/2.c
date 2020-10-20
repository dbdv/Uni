#include<stdio.h>
#include<string.h>
#define cantMaterias 7
#define max 30
#define maxF 9

typedef struct {
	char marca[max];
	char color[max];
	int control;
}proyector;
typedef struct {
	char tipo[max];
	long num;
}documento;
typedef struct{
	char calle_num[max], localidad[max];
	short cod_postal;
	long tel;
}direc;
typedef struct{
	char nombre[max], fechaReg[maxF], fechaAprob[maxF];
}materia;

int main(){
	struct producto{
		short cod, precio;
	};
	struct alumno{
		char nombre[max];
		short registro;
		documento doc_alum;
		materia materias[cantMaterias];
	};
	struct empleado{
		char nombre[max], fechaNac[maxF];
		documento docuEmpleado;
		direc direcEmpleado;
		short estCivil, cantHijos, sexo;
	};
return 0;}
