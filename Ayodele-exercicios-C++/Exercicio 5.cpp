#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	float X,N,RES ;
	puts("Calculo");
	puts("Digite um numero para X");
	scanf("%f",&X);
	puts("Digite um numero para N");
	scanf("%f",&N);

	RES=pow((X*N),2);

	printf("O resultado do cálculo de (X*N)² é %f",RES);

	system("PAUSE");
	return(0);
}
