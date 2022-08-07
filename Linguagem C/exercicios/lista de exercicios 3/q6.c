#include <stdio.h>

int main()
{
    int matriz[3][4];
    int lin, col;
    for(lin=0; lin<3; lin++){
        for(col=0; col<4; col++){
            printf("escreva um valor para a matriz \n");
            scanf("%d", &matriz[lin][col]);
        }
    }
    printf("essa é a matriz escrita \n");
    for(lin=0; lin<3; lin++){
        for(col=0; col<4; col++){
            printf("%d", matriz[lin][col]);
        }
        printf("\n");
    }
    printf("essa é a matriz transposta \n");
    for(col=0; col<4; col++){
        for(lin=0; lin<3; lin++){
            printf("%d", matriz[lin][col]);
        }
        printf("\n");
    }

    return 0;
}