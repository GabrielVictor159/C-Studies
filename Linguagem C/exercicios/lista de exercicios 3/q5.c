#include <stdio.h>

int main()
{
    int matriz1[2][5], matriz2[2][5], matriz3[2][5];
    int i, p;
for(i=0; i<2; i++){
  for(p=0; p<5; p++){
      printf("escreva um valor para a primeira matriz \n");
      scanf("%d", &matriz1[i][p]);
  }
 }
 for(i=0; i<2; i++){
  for(p=0; p<5; p++){
      printf("escreva um valor para a segunda matriz \n");
      scanf("%d", &matriz2[i][p]);
  }
 }
 for(i=0; i<2; i++){
  for(p=0; p<5; p++){
      matriz3[i][p]= matriz1[i][p] + matriz2[i][p];
      }
  }
  printf("os valores da soma de numeros de mesmo indice estão presentes na matriz \n ");
  for(i=0; i<2; i++){
      for(p=0; p<5; p++){
          printf("%d", matriz3[i][p]);
      }
      printf("\n");
  }

    return 0;
}