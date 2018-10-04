#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	float BS,AL,AR;

	puts("Digite a base do triângulo");
	scanf("%f",&BS);
	puts("Digite a altura do triângulo");
	scanf("%f",&AL);
	AR=((BS*AL)/2);
	printf("A área do triângulo é %f",AR);
	
	system("PAUSE");
	return(0);
}
