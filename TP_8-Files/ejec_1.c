#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int nroC;
     char tipoT;
     float monto;
     int i;
     FILE *arch;

     if( arch = fopen("transacciones.dat", "w") == NULL)
     {
        printf("Error.\n");
        exit(1);
     }
     else
     {
         for(i=0; i<1; i++)
         {
            printf("Nro de cuenta: ");
            fflush(stdin);
            scanf("%i", &nroC);
            printf("<E>Extraccion.\n<D>Deposito.\nTipo de transaccion: ");
            fflush(stdin);
            scanf("%c", &tipoT);
            printf("Monto: ");
            fflush(stdin);
            scanf("%f", &monto);

            fprintf(arch, "%i\t%c\t%.2f", nroC, tipoT, monto);
         }

     }

     fclose(arch);

     return 0;

 }
