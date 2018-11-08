#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int horario;
  
  puts("digite seu horario");
  scanf("%d", &horario);
  
 
  if (horario>=05.00 && horario<=12.59){
      printf("Esse periodo é de manha");
}
  else  {
  
    if(horario>=13.00 && horario<=20.59 ){
		printf("Esse periodo é de tarde");}
	 else {
	 	if(horario<=23.59)  {
		 	printf("Esse periodo é de noite");}
        else {
        	if(horario>=00 && horario<4.59) {
			
			printf("Esse periodo  é de noite");
	}
	
	    else {
	    	printf("Esse horario não existe");
	    	
		}
		}
}
	 }

	 
	 system("PAUSE");
	 return(0);
	 


}
