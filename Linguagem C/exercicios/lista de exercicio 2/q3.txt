#include <stdio.h>
int main() {
    int vector1[10], vector2[10], vector3[10];
    int i;
    for(i=0; i<10; i++){
        printf("escreva um valor de um numero inteiro \n");
        scanf("%d", &vector1[i]);
    }
    for (i=0; i<10; i++){
        printf("escreva um valor de um numero inteiro \n");
        scanf("%d", &vector2[i]);
    }
    for (i=0; i<10; i++){
        vector3[i]= vector2[i] + vector2[i];
        printf ("o vetor resultante no indice %d é igual a = %d \n", i, vector3[i]);
    }
    return 0;
}