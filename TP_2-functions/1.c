#include<stdio.h>

int calcula(int x, int y);

void main(){
	int a1,a2,a3;
	printf("Ingrese numero entero mayor a 0: ");
	scanf("%d",&a1);
	printf("Ingrese numero mayor a 0: ");
	scanf("%d",&a2);
	a3=calcula(a1,a1);
	printf("El resultado es: %d\n",a3);
	getchar();
}

int calcula(int x, int y){
	int cont=0;
	if(x<y) return cont;
		else{
			while(x>=y){
				cont ++;
				x -= y;
			}
		}
	return cont;
}