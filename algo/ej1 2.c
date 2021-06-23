#include <stdio.h>
#include <stdlib.h>

struct requisitos{
    char Nombre[30];
    char Apellido[30];
    char Rut[30];
    char Numero[8];
    char edad[3];
};

int main()
{

struct requisitos persona1;

printf("ngrese su nombre: ");
fgets(persona1.Nombre, 30, stdin);
printf("Ingrese su apellido: ");
fgets(persona1.Apellido, 30, stdin);
printf("Ingrese su rut: ");
fgets(persona1.Rut, 30, stdin);
printf("Ingrese su numero: ");
fgets(persona1.Numero, 8, stdin);
printf("Ingrese su edad: ");
fgets(persona1.edad, 3, stdin);

printf("%s",persona1.Nombre); 
printf("%s",persona1.Apellido);
printf("%s",persona1.Rut);
printf("%s",persona1.Numero);
printf("%s",persona1.edad);
return 0;
}