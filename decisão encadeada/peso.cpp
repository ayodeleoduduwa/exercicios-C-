#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  
float massa, altura, ideal;

   printf("Digite sua peso \n");
   scanf("%f", &massa);
   printf("Digite seu altura \n");
   scanf("%f", &altura);
   
  ideal= massa / (altura * altura);
   
   if (ideal<18.0) {
	   printf("Você esta muito magro");
   	}
   	
   	else {
   		if(ideal>18.0 && ideal<24.9) {
   			printf("Você esta saudavel");
		   }
		   else {
		   	if(ideal>25.0 && ideal<29.9) {
		   		printf("Você esta sobrepeso");
			   }
			   else {
			   	printf("Você esta obeso");
				   			   }
		   }
		   
	   }
   system("PAUSE");
   return(0);	   
}
