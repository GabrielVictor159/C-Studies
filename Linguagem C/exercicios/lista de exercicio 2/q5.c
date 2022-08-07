#include <stdio.h>

int main()
{
    int vector1[150], vector2[220];
    int i, f;
    printf("escreva as matriculas de Programação de Computadores \n");
    for (i=0; i<150; i++){
        scanf("%d", &vector1[i]);
    }
    printf("escreva as matriculas de Calculo Numérico \n ");
    for (i=0; i<220; i++){
        scanf("%d", &vector2[i]);
    }
    printf("esses alunos estão cursando as duas disciplinas simultaneamente: \n");
    for (i=0; i<150; i++){
       for(f=0; f<220; f++){
               if(vector1[i] == vector2[f]){
           printf("%d \n", vector1[i]);
       }
       }
    }

    return 0;
}