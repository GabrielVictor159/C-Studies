#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
float x;
float a;
printf("f(x)=x-4*a/2 \n");
printf("digite o valor de a \n");
scanf("%2f", &a);
printf("digite o valor de x \n");
scanf("%2f", &x);
float b;
float c;
float d;
b = 4 * a;
c = b / 2;
d = x - c;
printf("o valor da função de x sera = %.2f", d);


    return 0;
}