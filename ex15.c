
// 15) Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.

#include <stdio.h>

void main() {
    
    	float vetor[10];
    	float auxiliar;
    	int indice_menor;

    	printf("Digite os 10 números de ponto flutuante:\n");
    
	for (int i = 0; i < 10; i++) {
        
        	printf("Número %d: ", i + 1);
        	scanf("%f", &vetor[i]);
    	}

    	for (int i = 0; i < 10 - 1; i++) {
        
        	indice_menor = i;
        	
        	for (int j = i + 1; j < 10; j++) {
            	
            		if (vetor[j] < vetor[indice_menor]) {
                	
                		indice_menor = j;
            		}
        	}
        
        auxiliar = vetor[i]; // atribuo o valor do vetor em uma variável temporária para poder manipulá-la
        vetor[i] = vetor[indice_menor]; // agora coloco no vetor o menor valor
        vetor[indice_menor] = auxiliar; // devolvo o valor que estava no auxiliar
    	
    	}

    	printf("\nVetor ordenado:\n");
    	
    	for (int i = 0; i < 10; i++) {
        
        	printf("%.2f ", vetor[i]);
    	}
    
    	printf("\n");

}
