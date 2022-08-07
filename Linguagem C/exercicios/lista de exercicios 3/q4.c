#include <stdio.h>

int main()
{
int matriz [4][4];
int lin, col;
int multiplicacao=1;
for (lin=0;lin<4;lin++){
for (col=0; col<4; col++){
printf("Digite um número inteiro \n");
scanf("%d", &matriz[lin][col]);
}
}
for(col=0; col<4; col++){
    for(lin=0; lin<4; lin++){
    multiplicacao = multiplicacao * matriz[lin][col]; 
    }
    printf ("O multiplicação da coluna %d = %d \n", col, multiplicacao );
    multiplicacao = 1;
}

return 0;
}