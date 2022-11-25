#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1, n2, som, sub, mul, div;
	
	printf("Calculadora simples\n");
	printf("Digite os 2 numeors a serem resolvidos: ");
	scanf("%i%i", &n1, &n2);
	
	som = n1 + n2;
	sub = n1 - n2;
	mul = n1 * n2;
	div = n1 / n2;
	
	printf("A soma e: %i\n", som);
	printf("A subtracao e : %i\n", sub);
	printf("A multiplicao e : %i\n", mul);
	printf("A divisao e : %i\n", div);
	
	return 0;
}
