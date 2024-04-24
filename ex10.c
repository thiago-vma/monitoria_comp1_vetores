
// 10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.

#include <stdio.h>

void main(){

	int vet[100];
    	int num = 1;

    	for (int i = 0; i < 100; ) {
        
        	if (num % 7 != 0) {
            
            		vet[i] = num;
            		i++;
            	
        	}
        
		num++;
    	}

    
    	printf("Resultado:\n");
    
    	for (int i = 0; i < 100; i++) {
        
        	printf("%d ", vet[i]);
    	}
    	
    	printf("\n");

}
