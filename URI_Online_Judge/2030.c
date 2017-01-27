//testar codigo
#include <stdio.h>

int main(void)
{
    int n, ans;
    long t1, t2, atraso, voltas, total, teste = 1, c = 0, pit, menor = -1, tempo;

    scanf("%d", &n);

    while (n-- > 0)
    {
        scanf("%ld %ld %ld %ld %ld", &t1, &t2, &atraso, &voltas, &total);
        menor = -1;
        pit = 0;

        if (voltas > total)
        {
            if (c) printf("\n");
            printf("Teste #%ld\n%ld 0\n", c+1, t1*total);
        }
        else
        {
            for (ans = 0; ans <= total/voltas; ans++)
            {
                if (menor == -1)
                {
                    pit = ans;
                    menor = t1*(voltas) + t2*(total-voltas);
                }
                else
                {
                    if ((ans+1)*voltas > total)
                    {
                        tempo = t1*total+ans*atraso;
                        if (menor > tempo)
                        {
                            pit = ans;
                            menor = tempo;
                        }
                    }
                    else
                    {
                        tempo = t1*(voltas*(ans+1)) + t2*(total - voltas*(ans+1)) + atraso*ans;
                        if (menor > tempo)
                        {
                            pit = ans;
                            menor = tempo;
                        }
                    }
                }
            }
            if (c) printf("\n");
            printf("Teste #%ld\n%ld %ld\n", c+1, menor, pit);
        }
        c++;
    }
	printf("\n");
    return 0;
}
