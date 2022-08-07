#include <stdio.h>

int main()
{
    int matriz[6][6];
    int lin, col;
    int multiplicacao;
    multiplicacao=1;
    for(lin=0; lin<6; lin++){
        for(col=0; col<6; col++){
            printf("escreva um valor para a matriz \n");
            scanf("%d", &matriz[lin][col]);
        }
    }
    for(lin=0; lin<6; lin++){
        multiplicacao = multiplicacao * matriz[lin][lin];
    }
    printf("o produto da diagonal principal da matriz escrita é igual a = %d \n", multiplicacao);

    return 0;
}