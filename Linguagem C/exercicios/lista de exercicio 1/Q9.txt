#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, soma, media;
    printf("escreva suas notas \n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    soma = nota1 + nota2 + nota3;
    media = soma / 3;
    printf("sua media é = %.2f \n", media);
    if (media < 5.0){
        printf("conceito C \n");
    }
    else if (media >= 5.0 && media <= 6.9){
        printf("conceito B \n");
    }
    else if (media >= 7.0 && media <= 10){
        printf("conceito a \n");
    }
    return 0;
}