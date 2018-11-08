#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int idade;
  
  puts("Digite sua idade");
  scanf("%d", &idade);
  
  if (idade>4 && idade<8) {
  	printf("Infantil A");
  }
  
  else {
  	if (idade>7 && idade<10) {
  		printf("Infantil B");
	  }
	  else {
	  	if(idade>10 && idade<14) {
	  		printf("Juvenil A");
		  }	  
		  else {
		  	if (idade>13 && idade<18) {
		  		printf("Juvenil B");
		  		
			  }

		else {
			printf("Senior");
		}  }
		  }
  
}
system("Pause");
return(0);
}


