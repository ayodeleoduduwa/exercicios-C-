#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

 int main() {
 	
 	float cm,mt, dc, mm;
 	setlocale (LC_ALL, "Portuguese");
 	
 	puts("Digite uma medida em centímetros");
 	scanf("%f",&cm);
 	
 	mt=cm/100;
 	dc=cm/10;
 	mm=cm*10;
 	
 	printf("Há %f metros", mt);
 	printf("Há %f decimetros",dc);
 	printf("Há %fmilimetros", mm);
 	
 	system("PAUSE");
 	return(0);
 	
 	
 	
 }
