#include<stdio.h>
int main() {
    float nota1, nota2, nota3, prom ; 
    printf("01. MUESTRA EL PROMEDIO DE 3 NOTAS.\n\n");
    printf("Ingrese Nota 01 : ");
    scanf("%f", &nota1);
    printf("Ingrese Nota 02 : ");
    scanf("%f", &nota2);
    printf("Ingrese Nota 03 : ");
    scanf("%f", &nota3);
    prom = (nota1 + nota2 + nota3)/3;
    printf("\nEL PROMEDIO ES : %.2f\n", prom);
    return 0;
}
