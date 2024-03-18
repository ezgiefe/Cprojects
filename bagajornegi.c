#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//15 kg: bagaj - 8kg: el bagaj - kg baþýna: 5TL
	
	int bagaj,elb,fazlabagaj,fazlaelb,tutar;
	
	printf("bagaj kilonuzu giriniz: ");
	scanf("%d",&bagaj);
	
	printf("el bagaji kilonuzu giriniz: ");
	scanf("%d",&elb);
	
	fazlabagaj= bagaj-15;
	fazlaelb= elb-8;
	tutar= (fazlabagaj+fazlaelb)*5;
	
	printf("bagaj kilonuz: %d\n",bagaj);
	printf("el bagaji kilonuz: %d\n",elb);
	printf("fazla bagaj kilonuz: %d\n", fazlabagaj+fazlaelb);
	printf("odemeniz gereken tutar: %d\n",tutar);
	
	return 0;
}
