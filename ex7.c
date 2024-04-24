
// 7) Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.

#include <stdio.h>

void main(){

	int X[10];
	int menor = 99999999, maior = -9999999;
	
	printf("Entre com os valores do vetor: \n");
	
	for (int i = 0; i < 10; i++){
	
		scanf("%d", &X[i]);
	
	}
	
	for (int i = 0; i < 10; i++){
	
		if (X[i] < menor){
		
			menor = X[i];
		
		}
	
		if (X[i] > maior){
		
			maior = X[i];
		
		}
	}
	
	printf("O maior elemento é %d e o menor é %d\n", maior, menor);

}
