#include <stdio.h>

int main()
{
    
    float a, equacao, repete, cas1, cas2, cas3, cas4, cas5, cas6, cas7, cas8, cas9, cas10;
    int termo1, termo2,termo3,termo4,termo5,termo6,termo7,termo8,termo9,termo10;
    printf("escreva o valor de A \n");
    scanf("%f", &a);
    termo1=3;
    termo2=termo1*2;
    termo3=termo2*2;
    termo4=termo3*2;
    termo5=termo4*2;
    termo6=termo5*2;
    termo7=termo6*2;
    termo8=termo7*2;
    termo9=termo8*2;
    termo10=termo9*2;
    repete=7*a;
    cas1=repete/termo1;
    cas2=repete/termo2;
    cas3=repete/termo3;
    cas4=repete/termo4;
    cas5=repete/termo5;
    cas6=repete/termo6;
    cas7=repete/termo7;
    cas8=repete/termo8;
    cas9=repete/termo9;
    cas10=repete/termo10;
    equacao=cas1+cas2+cas3+cas4+cas5+cas6+cas7+cas8+cas9+cas10;
    printf("o valor da equação sera %.2f \n", equacao);
    
    return 0;
}
