
#include <stdio.h>

#define min(a,b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(void){

	int x, y, ans, resp = 0;
	scanf("%d %d", &x, &y);

	for (ans = min(x,y); ans <= max(x,y); ans++){
		if (ans % 13 != 0) resp += ans;
	}

	printf("%d\n", resp);

	return 0;
}