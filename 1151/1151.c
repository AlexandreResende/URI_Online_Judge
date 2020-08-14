
#include <stdio.h>

int main(void){

    int num, ans;
    long ant = 0, prox = 1, aux;

    scanf("%d", &num);

    if (num == 1){ 
    	printf("%ld\n", ant);
    }
    else if (num == 2) {
    	printf("%ld %ld\n", ant, prox);
    }
    else {
        printf("%ld %ld ", ant, prox);
        for (ans = 0; ans < num -3; ans++){
            aux = ant;
            ant = prox;
            prox = ant + aux;
            printf("%ld ", prox);
        }
        printf("%ld\n", ant + prox);
    }

    return 0;
}