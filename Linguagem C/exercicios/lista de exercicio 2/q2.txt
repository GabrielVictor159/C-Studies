#include <stdio.h>

int main()
{
    float vector[10], soma, divisao;
    int f, i, p, t;
    t=0;
    f=0;
    for (i=0; i<10; i++){
        printf("escreva uma nota \n");
        scanf("%f", &vector[i]);
    }
    soma = vector[0] + vector[1] + vector[2] + vector[3] + vector[4] + vector[5] + vector[6] + vector[7] + vector[8] + vector[9];
    divisao = soma / 10;
    for(p=0; p<10; p++){
        if (vector[p] >= divisao){
            f= f + 1;
        }
    }
    printf("a media sera igual a = %.2f \n", divisao);
    printf("o numero de alunos que tiraram notas maiores que a media é igual a = %d \n", f);
    
    

    return 0;
}
