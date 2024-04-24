
// 3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.

#include <stdio.h>

void main(){

	int vet1[4];  
	int soma = 0; 
	float media = 0;

	printf("Entre com os valores desejados:\n");
	
	for (int i = 0; i < 5; i++){
	
		scanf("%d", &vet1[i]);
	
	}

	printf("Os valores são:\n");

	for (int i = 0; i < 5; i++){
	
		soma += vet1[i];
	
		printf("Valor %d: %d\n", i + 1, vet1[i]);
	
	}
	
	media = soma / 5;
	printf("A média é: %.2f\n", media);


}
