#include <stdio.h>

int main()
{
    float vector[10];
    int i, p;
    for (i=0; i<10; i++){
        printf("escreva um numero \n");
        scanf("%f", &vector[i]);
        
    }
    for (p=0; p<10; p++){
        if(vector[p] == 30){
            printf("o vector %d é igual a 30 \n", p);
        }
        
    }
    
    

    return 0;
}
