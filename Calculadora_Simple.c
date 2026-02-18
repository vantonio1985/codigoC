#include <stdio.h>

int main(void) {
   float a, b;
   char operador;
   float resultado;

   printf("Ingrese primer numero: ");scanf("%f", &a);

   printf("Ingrese operador (+, -, *, /): ");
   scanf(" %c", &operador); // Espacio antes de %c

   printf("Ingrese segundo numero: ");
   scanf("%f", &b);

   if(operador == '+') {
     resultado = '+') {
     printf("%.2f + %.2f\ = %.2f\n", a, b, resultado);
   } else if(operador == '-') {
     resultado = a - b;
     printf("%.2f - %.2f = %.2f\n", a, b, resultado);
   } else if(operador == '*') {
     resultado = a * b;
     printf("%.2f * %.2f = %.2f\n", a, b, resultado);
   } else if(operador == '/') {
       if(b == 0) {
         printf("Error: Division por cero\n");
       } else {
         resultado = a / b;
         printf("%.2f / %.2f\n", a, b, resultado);
       }
    } else {
      printf("Operador no valido\n");}
     
    return 0;
 }
