#include <stdio.h>

int main()
{
    int num, num50, num10, num1, res50,res10,res1;
    printf("escreva o numero \n");
    scanf("%d", &num);
    num50=num/50;
    res50=num%50;
    num10=res50/10;
    res10=res50%10;
    num1=res10/1;
    printf("o numero de notas de 50 é %d \n", num50);
    printf("o numero de notas de 10 é %d \n", num10);
    printf("o numero de notas de 1 é %d \n", num1);

    return 0;
}