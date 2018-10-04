#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>



int main (){

	setlocale(LC_ALL, "Portuguese");
	float x1,x2, a, b, c, del;
	puts("Digite um numero para A");
	scanf("%f",&a);
	puts("Digite um numero para B");
	scanf("%f",&b);
	puts("Digite um numero para C");
	scanf("%f",&c);
	
	del= pow(b*2)- (4*a*c);
    x1=(-b+del/2)/2*a;
    x2=(-b-del/2)/2*a;
    printf("O valor de x é %f, o valor de x2 é %f", x1, x2);
    system("pause");
    return(0);
