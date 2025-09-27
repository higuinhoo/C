#include <stdio.h>

int main() 
{
	int idade = 0;
	idade = 89;
	
	
	float altura = 0;
	altura = 1.87;
	
	double peso = 0;
	peso = 82.1234567;
	
	char status = 'a';
	
	printf("Idade: %d\n",idade);
	printf("Altura: %.2f\n",altura); 
	printf("Peso: %lf\n",peso);
	printf("Status: %c\n", status);
	
	return 0;
}

/* 
---------------------

Especificadores

int	      %d   %i
char      %c
float     %f
double    %lf

---------------------
*/ 
