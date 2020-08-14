#include <stdio.h>
#define SIZE 5

int main(void)
{
    int ans, par=0, impar=0, pos=0, neg=0, numeros;

    for (ans = 0; ans < SIZE; ans++)
    {
        scanf("%d", &numeros);

        if (numeros % 2 == 0) par += 1;
        else impar += 1;

        if (numeros > 0) pos += 1;
        else if (numeros < 0) neg += 1;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
