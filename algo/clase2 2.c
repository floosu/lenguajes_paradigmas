#include<stdio.h>

void print_line(char*text) {
printf("%s\n" , text);
}



void ask_name(char*name) {
    printf("ingresa tu nombre: ");
    scanf("%s", ask_name);
}

int main(void) {
    char n[50];
    input_name(n);
    print_line(n);
}
//int main(void) {
   // printf("ingrsa tu nombre: ");
    //char name[50];
    //scanf("%s", name);
    //print_line(name);
   // return 0;
}
