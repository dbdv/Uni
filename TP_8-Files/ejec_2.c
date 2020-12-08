#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct e
{
    char nomb[30]; //string
    char ape[30]; //string
    int antiguedad;
}empleado;

void guardar_datos(FILE *f, empleado array[])
{
    int i;

    for(i=0; i<100; i++)
    {
        fprintf(f, "%s\t%s\t%i", array[i].nomb, array[i].ape, array[i].antiguedad);
    }

}

void leer_datos(FILE *f, empleado array[])
{
    empleado aux;
    int i;

    for(i=0; i<100; i++)
    {
        fscanf(f, "%s\t%s\t%i", aux.nomb, aux.ape, aux.antiguedad);
        array[i] = aux;
    }
}

int main()
{
    empleado personal[100], otro_personal[100];
    FILE *empleados, *nuevo;
    int i, n;

    if(empleados = fopen("empleados.txt", "w+") == NULL)
    {
        printf("ERROR.\n");
        exit(1);
    }else
    {
        printf("Cant a cargar: ");
        scanf("%i", &n);
        for(i=0; i<n; i++)
        {
            printf("Nombre: ");
            scanf("%s", personal[i].nomb);
            printf("Apellido: ");
            scanf("%s", personal[i].ape);
            printf("Antiguedad: ");
            scanf("%i", personal[i].antiguedad);
        }

        guardar_datos(empleados, personal);
    }
    fclose(empleados);
    if(nuevo = fopen("nuevo.txt", "r") == NULL)
    {
        printf("ERROR.\n");
        exit(1);
    }else
    {
        leer_datos(nuevo, otro_personal);
    }

    fclose(nuevo);

    return 0;

}
