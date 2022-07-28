#include <stdio.h>

int main()
{
    int num1, num2;
    printf("escreva o primeiro numero \n");
    scanf("%d", &num1);
    printf("escreva o segundo numero \n");
    scanf("%d", &num2);
    if (num1>num2){
        printf("o primeiro numero é o maior \n");
    }else if (num1<num2){
        printf("o segundo numero é o maior \n");
    }else if (num1 == num2){
        printf("os numeros são iguais \n");
    }
    return 0;
}