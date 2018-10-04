#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	int  r,alt,area;
	puts("Digite o raio de uma lata");
	scanf("%d",&r);
	puts("Digite a altura de uma lata");
	scanf("%d",&alt);
	
	area=2*(3,14*r*alt);
	
	printf("A área externa de uma lata é %d ", area);
	
	system("PAUSE");
	return(0);
	
}
