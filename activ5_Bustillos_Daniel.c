#include<stdio.h>
#include<string.h>

#define MAX 50000
#define SIZE 70

typedef char string[MAX];

typedef struct{
	int categ;
	char nombre[SIZE];
	float precio;
}producto;

float buscar_cat_prod(producto [], int, char []);

int main(){
	int cat;
	string prod;

	producto Merc_LaFlopy[MAX];
	
	printf("Ingrese la categor%ca del preducto que quiere buscar\n1-->Bebidas\n2-->Carnes\n3-->L%ccteos\n-->Frutas y verduras\n-->", 161, 160);
	do{
		scanf("%i",&cat);
		if(cat<1 || cat > 4) printf("Debe ingresar una opcion v%clida. Intente nuevamente.\n-->",160);
	}while(cat<1 || cat > 4);

	printf("Ingrese el producto que quiere buscar.\n");
	scanf("%s",prod);

	buscar_cat_prod(Merc_LaFlopy, cat, prod);

	return 0;
}

float buscar_cat_prod(producto almacen[], int cat, char prod[]){
	
	string categorias[]={"bebidas", "carnes", "lacteos", "frutas y verduras"};

	for(int i = 0; i < MAX; i++){
	 	if(!strcmp(prod,almacen[i].nombre) && cat == almacen[i].categ){
	 		
	 		almacen[i].precio *= 1.05;

	 		printf("En la categor%ca %s el producto: %s se increment%c su precio en un 5%c siendo su costo $%.2f\n",161,categorias[cat-1], almacen[i].nombre, 162, 37, almacen[i].precio);
			
			return almacen[i].precio;
		}
	}
return 0.0;
}