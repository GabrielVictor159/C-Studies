#include <stdio.h>
int main() {
 float vector1[10], f;
 int i;
 f = vector1[0];
 for(i=0; i<10; i++){
 printf("escreva uma nota \n");
 scanf("%f", &vector1[i]);
 }
 for (i=1; i<10; i++){
 if(vector1[i] < f){
 f = vector1[i];

 }
 }
 printf("o maior valor é %.2f", f);

 return 0;
}