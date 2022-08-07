#include <stdio.h>

int main()
{
    int idade;
    printf("escreva sua idade \n");
    scanf("%d", &idade);
    if (idade <16){
        printf("classe eleitoral não votante \n");
    
    }else if (idade >=18 && idade<65){
        printf("voto obrigatório \n");
    }else if(idade>=16 && idade<18){
        printf("voto facultativo \n");
    }
    else if(idade>=65){
        printf("voto facultativo \n");
    }
    

    return 0;
}