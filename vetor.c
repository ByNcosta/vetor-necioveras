#include <stdlib.h>
#include <stdio.h>

int * criar_vetor(int tam){

	int *vet; 

	vet = (int *) malloc( sizeof (int) * tam);
	return vet; 

}

void ler_vetor (int *vet, int tam){

	for(int i = 0; i < tam; i++)
		scanf("%d", &vet[i]);

}

void exibir_vetor(int *vet, int tam){
	printf("{");
    for (int i = 0; i < tam; i++){
		if (i < tam-1)
            printf("%.2d ", vet[i]);
        else
            printf("%.2d", vet[i]);
    }
    printf("}\n");

}

void destruir_vetor(int *vet){
	free(vet);
}


int main(){

	int tam; 
	int *vet; 
    scanf("%d", &tam);
	vet = criar_vetor(tam);
	ler_vetor(vet, tam);
	exibir_vetor(vet, tam);
	destruir_vetor(vet);

}