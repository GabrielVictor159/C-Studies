#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, soma, media;
    printf("escreva as suas notas \n");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
    soma = nota1 + nota2 + nota3 + nota4;
    media = soma / 4;
    printf("sua media é = %.2f \n", media);
    if (media >= 5.0){
        printf("aprovado");
    }else{
        printf("reprovado");
    }
    return 0;
}