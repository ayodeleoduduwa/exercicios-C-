#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


int main() {
	int sg, min;
	float ht;
	setlocale(LC_ALL, "Portuguese");	
	puts("Digite um valor em segundos");
	scanf("%d", &sg);
	min=sg/60;
	ht=min/60;
	printf ("Os minutos é %d e ",min);
	printf ("as horas é %f",ht );
	
	system("PAUSE");
	return(0);
}
