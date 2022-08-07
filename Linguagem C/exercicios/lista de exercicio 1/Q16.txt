#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;
    printf("escreva os valores dos tres lados do triangulo \n");
    scanf("%f%f%f", &lado1, &lado2, &lado3);
    if(lado1==lado2 && lado1==lado3){
        printf("o triangulo é equilátero \n");
    }
    else if (lado1==lado2){
        printf("o triangulo é isósceles \n");
    }
    else if (lado3==lado2){
        printf("o triangulo é isósceles \n");
    }
    else if (lado1==lado3){
        printf("o triangulo é isósceles \n");
    }
    else{
        printf("o triangulo é escaleno \n");
    }
    return 0;
}