#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	float BS,AL,AR;

	puts("Digite a base do ret�ngulo ");
	scanf("%f", &BS);
	puts("Digite a altura do ret�ngulo");
	scanf("%f", &AL);
	
	AR=BS*AL;
	
	printf("A �rea do ret�ngulo � %f",AR);
	
	system("PAUSE");
	return(0);
}
