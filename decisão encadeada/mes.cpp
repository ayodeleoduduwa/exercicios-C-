#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int mes;
  
  puts("Digite o numero correspondente ao m�s");
  scanf("%d", &mes);
  
  switch (mes) {
     case 1: printf("Janeiro"); break;
     case 2: printf("Fevereiro"); break;
     case 3: printf("Mar�o"); break;
     case 4: printf("Abril"); break;
     case 5: printf("Maio"); break;
     case 6: printf("Junho"); break;
     case 7: printf("Julho"); break;
	 case 8: printf("agosto"); break;
	 case 9: printf("Setembro"); break;
	 case 10:printf("Outubro"); break;
	 case 11:printf("Novembro"); break;
     case 12:printf("Dezembro"); break;
     
 
 
 
 default : 
	printf("Esse m�s nao existe"); break;
 }
  system("PAUSE");
  return(0);
  }
