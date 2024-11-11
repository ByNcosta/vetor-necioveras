#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int *vetor;
    size_t i;  // Alterado para size_t para representar índices e tamanho de forma adequada
    size_t tamanho;

    // Verifica se o número de argumentos é suficiente
    if (argc < 2) {
        printf("Erro: número insuficiente de argumentos\n");
        //return 1;
    }
    // Lê o tamanho do vetor (agora tamanho é do tipo size_t)
    tamanho = (size_t)atoi(argv[1]);
    if (tamanho == 0) {
        printf("Erro: tamanho inválido\n");
        //return 1;
    }
    // Aloca a memória para o vetor (com o tipo size_t)
    vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro: falha na alocação de memória\n");
        //return 1;
    }
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    // Libera a memória alocada
    free(vetor);
    return 0;
}
