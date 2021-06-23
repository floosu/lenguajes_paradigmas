#include <stdio.h>
#include <stdlib.h>

struct requisitos{
    char Nombre[30];
    char Rut[30];
};

void arreglo(int arreglo);
 {

 }
 int main()
 {
     int arreglo[20];
     for (int i = 0; i < 10; i++)
    {
        printf("ngrese su nombre: ");
        fgets(arreglo[i], 30, stdin);
        printf("Ingrese su rut: ");
        fgets(arreglo[i], 30, stdin);
        printf("%i", arreglo[i])
    }
 }
int main()
{

struct requisitos persona1;

printf("ngrese su nombre: ");
fgets(persona1.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona1.Rut, 30, stdin);


struct requisitos persona2;

printf("ngrese su nombre: ");
fgets(persona2.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona2.Rut, 30, stdin);


struct requisitos persona3;

printf("ngrese su nombre: ");
fgets(persona3.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona3.Rut, 30, stdin);

struct requisitos persona4;

printf("ngrese su nombre: ");
fgets(persona4.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona4.Rut, 30, stdin);

struct requisitos persona5;

printf("ngrese su nombre: ");
fgets(persona5.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona5.Rut, 30, stdin);

struct requisitos persona6;

printf("ngrese su nombre: ");
fgets(persona6.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona6.Rut, 30, stdin);


struct requisitos persona7;

printf("ngrese su nombre: ");
fgets(persona7.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona7.Rut, 30, stdin);

struct requisitos persona8;

printf("ngrese su nombre: ");
fgets(persona8.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona8.Rut, 30, stdin);

struct requisitos persona9;

printf("ngrese su nombre: ");
fgets(persona9.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona9.Rut, 30, stdin);

struct requisitos persona10;

printf("ngrese su nombre: ");
fgets(persona10.Nombre, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona10.Rut, 30, stdin);

printf("Ficha 1");
printf(" ");
printf("%s",persona1.Nombre); 
printf("%s",persona1.Rut);

printf("Ficha 2");
printf(" ");
printf("%s",persona2.Nombre); 
printf("%s",persona2.Rut);

printf("Ficha 3");
printf(" ");
printf("%s",persona3.Nombre); 
printf("%s",persona3.Rut);

printf("Ficha 4");
printf(" ");
printf("%s",persona4.Nombre); 
printf("%s",persona4.Rut);

printf("Ficha 5");
printf(" ");
printf("%s",persona5.Nombre); 
printf("%s",persona5.Rut);

printf("Ficha 6");
printf(" ");
printf("%s",persona6.Nombre); 
printf("%s",persona6.Rut);

printf("Ficha 7");
printf(" ");
printf("%s",persona7.Nombre); 
printf("%s",persona7.Rut);

printf("Ficha 8");
printf(" ");
printf("%s",persona8.Nombre); 
printf("%s",persona8.Rut);

printf("Ficha 9");
printf(" ");
printf("%s",persona9.Nombre); 
printf("%s",persona9.Rut);

printf("Ficha 10");
printf(" ");
printf("%s",persona10.Nombre); 
printf("%s",persona10.Rut);
return 0;
}