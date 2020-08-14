
#include <stdio.h>

#define min(a,b) ((a<b)? a:b)
#define max(a,b) ((a>b)? a:b)

int main(void){

	int x, y, ans;
	scanf("%d %d", &x, &y);

	for (ans = min(x,y)+1; ans < max(x,y); ans++){
		if (ans % 5 == 2 || ans % 5 == 3){
			printf("%d\n", ans);
		}
	}

	return 0;
}