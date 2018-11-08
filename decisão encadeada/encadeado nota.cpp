#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	char nome[10];
	float n1,n2,n3,n4,media;

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
	
	media=(n1+n2+n3+n4)/4;

	
	if(media>=9) {
		printf("Você esta aprovado com nota A \n");
			}
	else{
		if(media>=7 && media<9) {
			printf("Você esta aprovado com nota B \n");
		}
		else {
			if(media>=5 && media<=7) {
			printf("Você esta aprovado com nota C \n");
		}
	    else {
	    	if(media>2.5 && media<5) {
	    		printf("Você esta reprovado com nota D \n");
			}
		else {
			printf("Você esta reprovado com E \n");
		}
		
		}
	}
	
	system("PAUSE");
	
	return(0);
	
}
	
}
