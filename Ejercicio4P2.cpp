#include <stdio.h>
   
void escribirTablaMultiplicar (int numero)
{
   int tabla;
       
   for (tabla=1; tabla<=10; tabla++)
      printf("%d x %d = %d\n", numero, tabla, numero * tabla);
       
   return;
}

int main()
{
   int num, tabla;
     
   printf("Escriba un numero: ");
   scanf("%d", &num);
   escribirTablaMultiplicar(num);
     
   
   return 0;
}
