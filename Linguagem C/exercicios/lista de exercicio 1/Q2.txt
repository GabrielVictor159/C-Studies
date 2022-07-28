#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float soma;
    float subtracao;
    float multiplicacao;
    float divisao;
    printf("escreva o primeiro numero \n");
    scanf("%f", &num1);
    printf("escreva o segundo numero \n");
    scanf("%f", &num2);
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    printf("a soma dos numeros é = %2.f \n", soma);
    printf("a subtração dos numeros é = %2.f \n", subtracao);
    printf("a multiplicação dos numeros é = %2.f \n", multiplicacao);
    printf("a divisão dos numeros é = %2.f \n", divisao);

    return 0;
}