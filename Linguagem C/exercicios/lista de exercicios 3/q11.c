#include <stdio.h>
int main(){
    
    int num;
    int i, a;
    int divisao;
    a=0;
    printf("escreva um numero \n");
    scanf("%d", &num);
    for(i=2; i<num; i++){
        divisao = num % i;
        if(divisao==0){
            a++;
        }
    }
    if(a==0 && a<1){
        printf("o numero é primo \n");
    }
    else{
        printf("o numero não é primo \n");
    }
    return 0;
}