#include <stdio.h>

int main()
{
    float valor, maximo, proporcao, equacao;
    printf("escreva o resultado \n");
    scanf("%f", &valor);
    printf("escreva o valor maximo \n");
    scanf("%f", &maximo);
    printf("escreva a proporção maxima a ser alcançada \n");
    scanf("%f", &proporcao);
    equacao = valor * proporcao / maximo;
    printf("o resultado na proporção %.2f sera = %.2f", proporcao, equacao);

    return 0;
}