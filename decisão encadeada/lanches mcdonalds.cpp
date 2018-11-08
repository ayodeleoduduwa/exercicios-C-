#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int lanche;
      printf("Digite  o seu lanche \n");
      scanf("%d", &a);

    switch (lanche) {
    	
        case 1: printf("Lanche escolhido é um BigMac"); break;
        case 2: printf("Lanche escolhido é um Quarteirão"); break;
		case 3: printf("Lanche escolhido é um printf"); break;
		case 4: printf("Lanche escolhido é um Cheddar MacMelt"); break;
		case 5:	printf("Lanche escolhido é um MacMax"); break;
		
	
    	
	
	default: 
		
	
	 printf("Esse lanche não existe"); break;
	
	}
	
	
	system("Pause");
	return(0);
	
}
