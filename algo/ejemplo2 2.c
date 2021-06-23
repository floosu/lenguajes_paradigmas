#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[200];
    char rut[200];
    int i= 0;
    int j= 0; 
   
    for (i=0; i<5; i++)
    {
       printf("ingrese su nombre: ");
       scanf("%s", &nombre[i]);
       printf("ingrese su rut:");
       scanf("%s", &rut[i]);
    }
    printf("listado de nombres y rut: ");
    for (i=0; i<5; i++)
    {
        printf("%c", nombre[i]);
        printf(" %c", rut[i]);
    }
   
}
