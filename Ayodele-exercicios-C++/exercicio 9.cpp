#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main () {
	
		setlocale(LC_ALL, "Portuguese");
		float dp, s1, s2, s3;
		
		dp=500;
		
		printf("O dep�sito inicial � %f", dp);
		
		dp=500;
		s1=dp+((dp/100)*1);
		s2=s1+((s1/100)*1);
		s3=s2+((s2/100)*1);
		
		printf("O saldo ap�s o terceiro m�s � %f", s3);
		
		system("PAUSE");
		return(0);
		
		
		
	
}
