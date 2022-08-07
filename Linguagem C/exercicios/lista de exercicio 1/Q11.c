#include <stdio.h>

int main()
{
    char nome[15];
    int idade;
    printf("escreva seu nome \n");
    scanf("%s", &nome);
    printf("escreva sua idade \n");
    scanf("%d", &idade);
    switch(idade){
        case 5 ... 10:
        printf("%s sua categoria é Infantil \n",nome);
        break;
        case 11 ... 15:
        printf("%s sua categoria é juvenil \n",nome);
        break;
        case 16 ... 20:
        printf("%s sua categoria é junior \n",nome);
        break;
        case 21 ... 25:
        printf("%s sua categoria é profissional \n",nome);
        break;
        
    }
    
    

    return 0;
}