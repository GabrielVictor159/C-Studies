#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, soma, media;
    printf("digite o valor da primeira nota \n");
    scanf("%f", &nota1);
    printf("digite o valor da segunda nota \n");
    scanf("%f", &nota2);
    printf("digite o valor da terceira nota \n");
    scanf("%f", &nota3);
    printf("digite o valor da quarta nota \n");
    scanf("%f", &nota4);
    soma = nota1 + nota2 + nota3 + nota4;
    media = soma/4;
    printf("a media das notas é = %f \n", media);
    return 0;
}