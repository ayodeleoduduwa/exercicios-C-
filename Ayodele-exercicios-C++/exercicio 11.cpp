#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

 int main() {
 	
 	float cm,mt, dc, mm;
 	setlocale (LC_ALL, "Portuguese");
 	
 	puts("Digite uma medida em cent�metros");
 	scanf("%f",&cm);
 	
 	mt=cm/100;
 	dc=cm/10;
 	mm=cm*10;
 	
 	printf("H� %f metros", mt);
 	printf("H� %f decimetros",dc);
 	printf("H� %fmilimetros", mm);
 	
 	system("PAUSE");
 	return(0);
 	
 	
 	
 }
