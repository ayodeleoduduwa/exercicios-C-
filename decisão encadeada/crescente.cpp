#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

 int a, b, c;
 
     puts("Digite o primeiro valor");
     scanf("%d", &a);
     puts("Digite o segundo valor");
     scanf("%d", &b);
     puts("Digite o terceiro valor");
     scanf("%d", &c);
     
     
    if(a<b && a<c) {
    	if(b<c) {
    		printf("%d, %d, %d", a, b, c);}
		else{
			printf("%d, %d, %d", a, c, b); }
	}
		else {
			if(b<a && b<c) {
		     if(a,c) {
		     	printf("%d, %d, %d", b, a, c);}
		    else{
		    	printf("%d, %d, %d", b, c, a );}
		    }
		
		else{
			if(a<b) {
				printf("%d, %d, %d", c, a, b);}
				else {
					printf("%d, %d, %d", c, b, a);}
			
	}
	
}
  system("PAUSE");
  return(0);

}
