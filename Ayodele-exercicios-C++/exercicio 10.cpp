#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

float vh, ht,bn, nd, sb, sl;
	puts("Valor da Hora");
	scanf("%f",&vh);
	puts("horas trabalhadas no m�s");
	scanf("%f",&ht);
	puts("Numero de dependentes");
	scanf("%f",&nd);
   
    sb=vh*ht;
    sl=sb+(bn*nd);
    
	printf("Seu salario bruto � %f e o salario liquido � %f", sb, sl);

    system("PAUSE");
    return(0);
    
}
