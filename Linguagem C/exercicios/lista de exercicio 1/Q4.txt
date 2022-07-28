#include <stdio.h>

int main()
{
   float b, h, multiplicacao, area;
   printf("escreva o valor da base b \n");
   scanf("%f", &b);
   printf("escreva o valor da altura h \n");
   scanf("%f", &h);
   multiplicacao = b * h;
   area = multiplicacao / 2;
   printf("a area do triangulo é igual = %f \n", area);
   
}