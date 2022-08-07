#include <stdio.h>
int main(){
    
    int avioes[37][2];
    int linha, coluna;
    int reservas, escolha, identidade;
    printf("escreva o numero de cada avião \n");
    for(linha=0; linha<37; linha++){
        scanf("%d", &avioes[linha][1]);
    }
    for(linha=0; linha<37; linha++){
        printf("escreva a quantidade de assentos disponiveis do aviao %d \n", avioes[linha][1]);
        scanf("%d", &avioes[linha][2]);
    }
    printf("Essa é a lista de voos e os assentos disponiveis \n");
    for(linha=0; linha<37; linha++){
        printf("%d: ", linha);
        for(coluna=0; coluna<2; coluna++){
            printf("%d ", avioes[linha][coluna]);
        }
        printf("\n");
    }
    printf("quantas reservas deseja fazer ? \n");
    scanf("%d", &reservas);
    printf("qual voo deseja escolher ?\n");
    scanf("%d", &escolha);
    if(reservas>avioes[escolha][1]){
        printf("não a assentos disponiveis \n");
    }
    else{
    printf("qual o número da sua carteira de identidade ? \n");
    scanf("%d", &identidade);
    printf("cliente %d o senhor reservou %d lugares no voo %d \n",identidade, reservas, avioes[escolha][1]);
    }
    return 0;
}