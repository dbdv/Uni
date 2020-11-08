#include<stdio.h>
#include<string.h>

/*CONSTANTES A USAR*/
#define MAX 500
#define SIZE 70
#define PLUS 1.05

/*DECLARACION DE TIPOS*/
typedef char string[SIZE];

typedef struct{
	int categ;
	char nombre[SIZE];
	float precio;
}producto;

/*PROTOTIPO DE FUNCIONES*/
float buscar_cat_prod(producto [], int, string, int);
void carga_datos(producto [], int *);

/*MAIN*/
int main(){
	int cat, cant=0;
	string prod;
	producto Merc_LaFlopy[MAX];

	carga_datos(Merc_LaFlopy, &cant);

	printf("Ingrese la categor%ca del preducto que quiere buscar\n1-->Bebidas\n2-->Carnes\n3-->L%ccteos\n4-->Frutas y verduras\n-->", 161, 160);
	do{
		scanf("%i",&cat);
		if(cat<1 || cat > 4) printf("Debe ingresar una opcion v%clida. Intente nuevamente.\n-->",160);
	}while(cat<1 || cat > 4);

	printf("Ingrese el producto que quiere buscar.\n");
	fflush(stdin);
	fgets(prod, SIZE, stdin);

	buscar_cat_prod(Merc_LaFlopy, cat, prod, cant);

	return 0;
}

/*FUNCION PARA CARGAR PRODUCTOS*/
void carga_datos(producto almacen[], int *cant){
    int i, aux=*cant;

    printf("Tiene disponibles %i posiciones, cuantos productos va a cargar: ", MAX-aux);
    do{
        scanf("%i", cant);
        if(*cant < 0 || *cant > MAX-aux) printf("La cantidad ingresada no es v%clida. Intente nuevamente.\n", 160);
    }while(*cant < 0 || *cant > MAX-aux);

    for(i=aux; i< *cant; i++){

        printf("Seleccione la categor%ca\n1-->Bebidas\n2-->Carnes\n3-->L%ccteos\n4-->Frutas y verduras\n-->", 161, 160);
        do{
            scanf("%i", &almacen[i].categ);
            if(almacen[i].categ < 1 || almacen[i].categ > 4) printf("Debe elegir una cateogor%ca v%clida. Intente nuevamente\n", 161, 160);
        }while(almacen[i].categ < 1 || almacen[i].categ > 4);

        printf("Ingrese el nombre del producto: ");
        fflush(stdin);
        fgets(almacen[i].nombre, SIZE, stdin);

        printf("Ingrese el precio del producto: ");
        do{
            scanf("%f", &almacen[i].precio);
            if(almacen[i].precio < 0) printf("Ha ingresado un valor inv%clido. Intente nuevamente.\n", 160);
        }while(almacen[i].precio < 0);
    }
}

/*FUNCION PARA BUSCAR UN PRODUCTO ENTRE LOS YA CARGADOS*/
float buscar_cat_prod(producto almacen[], int cat, string prod, int top){

    int i;
	string categorias[]={"bebidas", "carnes", "lacteos", "frutas y verduras"};

	for(i = 0; i < top; i++){
	 	if(!strcmp(prod,almacen[i].nombre) && cat == almacen[i].categ){

	 		almacen[i].precio *= PLUS;

	 		printf("En la categor%ca %s el producto: %s se increment%c su precio en un 5%c siendo su costo $%.2f\n",161,categorias[cat-1], almacen[i].nombre, 162, 37, almacen[i].precio);

			return almacen[i].precio;
		}
	}
return 0.0;
}
