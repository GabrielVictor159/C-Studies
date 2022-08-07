#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float numeroa;
    printf("ax^2 + bx + c = 0 \n");
    printf("digite o numero de a \n");
    scanf("%f", &numeroa);
    float numerob;
    printf("digite o numero de b \n");
    scanf("%f", &numerob);
    float numeroc;
    printf("digite o numero de c \n");
    scanf("%f", &numeroc);
    float equacaob = pow (numerob,2);
    float equacaoa;
    equacaoa = 4 * numeroa * numeroc;
    float equacaodelta;
    equacaodelta = equacaob - equacaoa;
    printf("o delta sera = %f \n", equacaodelta);
    if (equacaodelta < 0)
    { printf ("o valor de delta é negativo não existe raiz" );
      return (0);
    }
    float raiz;
    raiz = sqrt (equacaodelta);
    float avezesdois;
    avezesdois = numeroa * 2;
    float xumum = equacaob + raiz;
    float xumdois = xumum / avezesdois;
    float xdoisum = equacaob - raiz;
    float xdoisdois = xdoisum / avezesdois;
    printf("o primeiro x sera = %f \n", xumdois);
    printf("o segundo x sera = %f \n", xdoisdois);
    
    
    
    
    

    return 0;
}