#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int Ejercicio1();
int Ejercicio2();
int Ejercicio3();
int Ejercicio4();
int Ejercicio5();
int Ejercicio6();
int Ejercicio7();
int Ejercicio8();
int Llamado()
int Reintento();


int main(){

	printf("\n\t||-------------Practico 1-------------||\n\n");

	Llamado();

	return 0;

}

int Llamado(){

	int opcion;

	printf("--->Seleccione un ejercicio(1,2,3,4,5,6,7,8): ");
	scanf("%i",&opcion);
	printf("\n");

	switch(opcion){
		case 1 : Ejercicio1();
			break;
		case 2 : Ejercicio2();
			break;
		case 3 : Ejercicio3();
			break;
		case 4 : Ejercicio4();
			break;
		case 5 : Ejercicio5();
			break;
		case 6 : Ejercicio6();
			break;
		case 7 : Ejercicio7();
			break;
		case 8 : Ejercicio8();
			break;
		default: 	
		printf("\t||No eligió una opción valida||\n");
		Reintento();
	}


	return 0;
}

int Reintento(){
	int elec, borrar;

	printf("\n--->Quiere probar otra opcion?(ingrese '1' para si): ");
	scanf("%i",&elec);
	if(elec == 1){
		printf("\n--->Quiere borrar la pantalla?(ingrese '1' para confirmar): ");
		scanf("%i",&borrar);
		if (borrar == 1){
			system("clear");
			Llamado();
		}else{
			Llamado();
		}
	}

	return 0;
}


int Ejercicio1(){

	printf("\n\t-------------Ejercicio 1-------------\n");
	//1.1
	int c, vble1, numero;
	//1.2
	printf("--->Ingrese un entero: ");
	//1.3
	scanf("%i",&c);
	//1.4
	if(numero != 7 ){
		printf("La variable numero\nno es igual a 7\n");	
	}
	//1.5
	int x,z;
	int resultado = x * z;
	//1.6
	if((vble1 *= 2)>10){
		printf("El producto es mayor que 10 \n");
	}

	Reintento();

	return 0;
}

int Ejercicio2(){

	printf("\n\t-------------Ejercicio 2-------------\n");
	float total=0, notas;
	
	for (int i = 1; i <= 4; ++i)
	{
		printf("--->Ingrese la %i° nota\n",i);
		scanf("%f",&notas);
		total += notas;
	}
	total /= 4;
	printf("La nota promedio es: %.2f\n",total);

	Reintento();

	return 0;
}

int Ejercicio3(){

	printf("\n\t-------------Ejercicio 3-------------\n");
	int edad;
	printf("--->Ingrese su edad: ");
	scanf("%i",&edad);
	while(edad <= 0 ){
		printf("\nIngrese una edad válida\n");
		printf("--->Ingrese su edad: ");
		scanf("%i",&edad);
	}
	if(edad < 16){
		printf("Usted NO PUEDE votar\n");
	}else if(edad >= 16 && edad<18){
		printf("Usted PUEDE votar si lo desea\n");
	}else if(edad >= 18 && edad <=69 ){
		printf("Ustede DEBE votar\n");
	}else{
		printf("Usted PUEDE votar SI lo desea\n");
	}

	Reintento();

	return 0;
}

int Ejercicio4(){

	printf("\n\t-------------Ejercicio 4-------------\n");

	int n,i=1,j=64;
	char a;

	printf("--->Ingrese un numero natural(1-26):");
	scanf("%i",&n);
	while(n <= 1 || n >= 26){
		printf("\t||Por favor ingrese un valor valido||\n--->Ingrese un numero natural(1-26):");
		scanf("%i",&n);
		printf("\n");
	}
	while(i<= n){
		j += 1;
		a = j;
		printf("%c",a);

		i++;
	}
	printf(".\n");

	Reintento();


	return 0;
}

int Ejercicio5(){

printf("\n\t-------------Ejercicio 5-------------\n");

Reintento();
return 0;
}

int Ejercicio6(){

printf("\n\t-------------Ejercicio 6-------------\n");

Reintento();
return 0;
}

int Ejercicio7(){

printf("\n\t-------------Ejercicio 7-------------\n");

Reintento();
return 0;
}

int Ejercicio8(){

printf("\n\t-------------Ejercicio 8-------------\n");

Reintento();
return 0;
}