
// 11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.

#include <stdio.h>

void main(){

	float vet1[20];
    	float vet2[20];
    	int n;

    	printf("Entre com o numero de elementos (maximo 20): ");
    	scanf("%d", &n);

    	printf("Digite os numeros:\n");
    
    	for (int i = 0; i < n; i++) {
        
        	printf("Elemento %d: ", i + 1);
        	scanf("%f", &vet1[i]);
    	}

        for (int i = 0; i < n; i++) {
        
        	vet2[i] = vet1[i] * vet1[i];
    	}

    	printf("\nVetor Original:\n");
    	
    	for (int i = 0; i < n; i++) {
        
        	printf("%.2f ", vet1[i]);
    	}
    
    	printf("\n");

    	printf("Vetor Quadrado:\n");
    
    	for (int i = 0; i < n; i++) {
        
        	printf("%.2f ", vet2[i]);
    	}
    
    	printf("\n");

}
