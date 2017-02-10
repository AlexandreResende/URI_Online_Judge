#include <stdio.h>
#define SIZE 6

int main(void)
{
    int ans, quant = 0;
    double numeros, soma = 0;

    for (ans = 0; ans < SIZE; ans++)
    {
        scanf("%lf", &numeros);
        if (numeros > 0)
        {
            quant += 1;
            soma += numeros;
        }
    }

    printf("%d valores positivos\n", quant);
    printf("%.1f\n", soma/quant);

    return 0;
}
