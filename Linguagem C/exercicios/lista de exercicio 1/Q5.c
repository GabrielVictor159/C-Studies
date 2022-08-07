#include <stdio.h>
#include <math.h>


int main()
{
    float raio, area, quadrado;
    printf("escreva o valor do raio do círculo \n");
    scanf("%f", &raio);
    quadrado = pow(raio,2);
    area = 3.14159265359 * quadrado;
    printf("a area do circulo é aproxidamente = %f \n", area);
    return 0;
}