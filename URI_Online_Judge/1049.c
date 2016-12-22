
#include <stdio.h>
#include <string.h>

int main(void){
	
	char w1[20], w2[20], w3[20];

	scanf("%s%*c%s%*c%s%*c", w1, w2, w3);

	if (!strcmp(w1, "vertebrado")){
		if(!strcmp(w2, "ave")){
			if(!strcmp(w3, "carnivoro")){
				printf("aguia\n");
			} else {
				printf("pomba\n");
			}
		}else {
			if(!strcmp(w3, "onivoro")){
				printf("homem\n");
			} else {
				printf("vaca\n");
			}
		}
	} else {
		if(!strcmp(w2, "inseto")){
			if(!strcmp(w3, "hematofago")){
				printf("pulga\n");
			} else {
				printf("lagarta\n");
			}
		}else {
			if(!strcmp(w3, "hematofago")){
				printf("sanguessuga\n");
			} else {
				printf("minhoca\n");
			}
		}
	}

	return 0;
}