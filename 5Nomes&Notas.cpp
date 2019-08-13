	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
int main() {
	
	char Nome[5][45]; 
	char Nota[5][45]; 
	int contador;

    for (contador = 1; contador <=5; contador++) {
            printf ("\nInforme o nome do %i Aluno: ",contador,Nome[contador], Nota[contador]);
            gets (Nome[contador]);
            fflush(stdin);
            printf ("Informe a Nota do %i Aluno: ",contador,Nome[contador], Nota[contador]);
            gets (Nota[contador]);
            fflush(stdin);
            }                         
       
       for (contador = 1; contador<=5; contador++){
           for (contador = 1; contador <=5; contador++){
           printf("\n Nomes:  %s Nota: %s \n", Nome [contador],Nota [contador]);
           }
       }
        
	system ("Pause") ;
    return 0;
}
