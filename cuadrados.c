#include<stdio.h>
 
int main()
{
  int numero, cuadrado;
 
  printf(" \n Escribe un numero: ");
  scanf("%d", &numero);
  
  cuadrado = numero * numero;
  
  printf("\n El cuadrado de %d es  =  %d", numero, cuadrado);
 
  return 0;
}
