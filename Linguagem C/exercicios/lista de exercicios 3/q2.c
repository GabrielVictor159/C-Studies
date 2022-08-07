#include <stdio.h>
int main() {
 int vector1[10], vector2[10];
 float vector3[100];
 int i, p, f;
 p=0;
 for(i=0; i<10; i++){
     printf("escreva um valor para o primeiro vetor \n");
     scanf("%d", &vector1[i]);
 }
 for(i=0; i<10; i++){
     printf("escreva um valor para o segundo vetor \n");
     scanf("%d", &vector2[i]);
 }
 for(i=0; i<10; i++){
     for(p=0; p<10; p++){
     if(vector1[i] == vector2[p]){
         vector3[f]= vector1[i] * vector2[p];
         printf("o valor do produto dos indices de mesmo valor do primeiro vetor na posição %d e do segundo vetor na posição %d é igual = %.2f \n", i, p, vector3[f]);
     } 
     }

 }
 return 0;
}