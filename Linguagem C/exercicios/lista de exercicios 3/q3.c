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
multiplicacao = multiplicacao * matriz[lin][col];
}
printf ("O multiplicação da linha %d = %d \n", lin, multiplicacao );
multiplicacao = 1;
}

return 0;
}