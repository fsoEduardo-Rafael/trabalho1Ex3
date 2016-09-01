#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
	int i;
	double number1=7.3, number2;
	char s1[100], s2[100];
	double * dPtr = &number1;
	printf("Segue o valor da variavel number1: %.2f\n", *dPtr);

	number2 = *dPtr;
	printf("Segue o valor da variavel number2: %.2f\n", number2);
	printf("Segue o endereco da variavel number1: %p\n", &number1);
	printf("Segue o endereco da variavel number1 pelo ponteiro: %p\n", dPtr);
	printf("Sim, o valor deve ser igual, já que estamos falando do mesmo endereço de memória\n");
fflush(stdin);
	printf("Entre com uma string:");
	scanf("%s", s1);

	printf("\nSegue a string s1: %s\n", s1);

	for(i=0 ; i<=strlen(s1) ; i++){
		s2[i] = s1[i];
	}
	printf ("Segue s2: %s\n", s2);

	printf("Concatenando as duas strings: %s\n", strcat(s1,s2));
	printf("Pode, se não distribuir corretamente os caracteres no vetor com a string.\n");
	printf("O comprimento da string s1 e: %zu\n", strlen(s1));
	return 0;
}

