#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	float BS,AL,AR;

	puts("Digite a base do tri�ngulo");
	scanf("%f",&BS);
	puts("Digite a altura do tri�ngulo");
	scanf("%f",&AL);
	AR=((BS*AL)/2);
	printf("A �rea do tri�ngulo � %f",AR);
	
	system("PAUSE");
	return(0);
}
