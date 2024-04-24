
// 9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A – B. Mostre na tela os dados do array C.

#include <stdio.h>

void main(){

	int A[10], B[10], C[10];


    	printf("Entre com os 10 numeros inteiros para o array A:\n");
    
    	for (int i = 0; i < 10; i++) {
        
        	printf("Numero %d: ", i + 1);
        	scanf("%d", &A[i]);
    	}

    	printf("\nDigite os 10 numeros inteiros para o array B:\n");
    
    	for (int i = 0; i < 10; i++) {
        
        	printf("Numero %d: ", i + 1);
        	scanf("%d", &B[i]);
    	}

        for (int i = 0; i < 10; i++) {
        
        	C[i] = A[i] - B[i];
    	}

    	printf("\nArray C:\n");
    
    	for (int i = 0; i < 10; i++) {
        
        	printf("%d\n", C[i]);
    	}

}
