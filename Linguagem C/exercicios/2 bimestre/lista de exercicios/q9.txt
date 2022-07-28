#include <stdio.h>

void teste (float x, float y, float z){
float soma[3];
soma[0]=x+y;
soma[1]=y+z;
soma[2]=z+x;
if(x>soma[1] || y>soma[2] || z>soma[0]){
    printf("os valores X Y Z não formam um triangulo \n");
}
else if(x==y && x==z){
   printf("O triangulo de X Y Z é um triangulo equilátero \n"); 
}    
else if(x==y || x==z || z==y){
    printf("O triangulo de X Y Z é um triangulo isósceles \n"); 
}
else {
    printf("O triangulo de X Y Z é um triangulo escaleno \n"); 
}
}

int main(){
float x, y, z;
float equacao;
printf("escreva os valores de X Y Z \n");
scanf("%f%f%f", &x, &y, &z);
teste(x,y,z);
return 0;
}