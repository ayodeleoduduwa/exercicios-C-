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
	   printf("Voc� esta muito magro");
   	}
   	
   	else {
   		if(ideal>18.0 && ideal<24.9) {
   			printf("Voc� esta saudavel");
		   }
		   else {
		   	if(ideal>25.0 && ideal<29.9) {
		   		printf("Voc� esta sobrepeso");
			   }
			   else {
			   	printf("Voc� esta obeso");
				   			   }
		   }
		   
	   }
   system("PAUSE");
   return(0);	   
}
