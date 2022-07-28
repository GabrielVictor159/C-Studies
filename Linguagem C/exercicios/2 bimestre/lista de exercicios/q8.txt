#include <stdio.h>

int main()
{
    int matriz[3][3];
    int lin, col;
    int soma;
    soma=0;
    for(lin=0; lin<3; lin++){
        for(col=0; col<3; col++){
            printf("escreva um valor para a matriz \n");
            scanf("%d", &matriz[lin][col]);
            soma = soma + matriz[lin][col];
        }
    }
    printf("a somatoria de todos os valores da matriz escrita é igual a = %d \n", soma);

    return 0;
}