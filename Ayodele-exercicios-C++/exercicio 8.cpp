#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int an, aa,ida, id2050;

	
    puts("digite seu ano de nascimento");
	scanf("%d",&an);
	
	aa=2018;
	
	ida=aa-an;
	
	id2050=2050-an;
	
	printf("Sua idade atual é %d e ", ida );
    printf("Sua idade em 2050 será %d ", id2050);
	
	system("PAUSE");
	return(0);
	
	
	
	
	
}

