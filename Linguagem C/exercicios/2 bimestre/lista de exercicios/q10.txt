
#include <stdio.h>

int bissexto (int ano){
int a;
a=0;
int divisao[3];
divisao[0] = ano % 4;
divisao[1] = ano % 100;
divisao[2] = ano % 400;
if(divisao[0] == 0){
if(divisao[1] == 0){
a=1;
}
}
else if(divisao[2] == 0){
a=1;
}
else {
a=2;
}
return a;
}

int main()
{
int ano, resultado;
printf("escreva o ano \n");
scanf("%d", &ano);
resultado = bissexto(ano);

if(resultado == 1){
printf("o ano %d é um ano bissexto \n", ano);
}
else{
printf("o ano %d não é um ano bissexto \n", ano);
}

return 0;
}
