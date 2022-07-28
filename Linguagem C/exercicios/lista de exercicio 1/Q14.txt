#include <stdio.h>

int main()
{
    int numero, n, final;
    printf("digite o valor do numero \n");
    scanf("%d", &numero);
    final=1;
    n=1;
    while(final<numero){
        final = n*(n+1)/2;
        n= n + 1;
        
        
    }

    if(final == numero)
    printf("o numero é triangular \n");
    else
    printf("não é um numero triangular \n");

    return 0;
}