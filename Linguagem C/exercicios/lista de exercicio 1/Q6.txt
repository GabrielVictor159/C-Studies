#include <stdio.h>

int main()
{
    int num;
    printf("escreva o numero inteiro \n");
    scanf("%d", &num);
    if(num>0){
        printf("Número Positivo \n");
    }else if(num<0){
        printf("Número Negativo \n");
    }
    else if(num == 0){
        printf("zero \n");
    }
    return 0;
}





resposta:
a) num=10: número positivo
b) num=0: zero
c) num=-4: número negativo
