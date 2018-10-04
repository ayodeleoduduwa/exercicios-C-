#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	char nome[10];
	float n1,n2,n3,n4,Media;

	puts ("Digite o nome do aluno");
	scanf("%s", &nome);
	puts ("Digite a primeira nota ");
	scanf ("%f",&n1);
	puts ("Digite a segunda nota ");
	scanf ("%f",&n2);
	puts ("Digite a terceira nota ");
	scanf ("%f",&n3);
	puts ("Digite a quarta nota ");
	scanf("%f",&n4);
	
	Media=(n1+n2+n3+n4)/4;

	printf(" %s Sua média aritmetica é %.f", nome , Media);
	
	system("PAUSE");
	
	return(0);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
	
