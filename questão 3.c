#include <stdio.h>

int main() {
    int numero;              // Variável inteira para armazenar o número
    int *ponteiro;           // Variável ponteiro de tipo int

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);    // Lê o número inteiro fornecido pelo usuário

    ponteiro = (int *)malloc(sizeof(int));   // Alocando memória para o ponteiro

    *ponteiro = numero;      // Atribui o valor da variável 'numero' ao ponteiro

    printf("\nFormato apos a atribuicao: %p\n", ponteiro);

    free(ponteiro);          // Libera a memória alocada para o ponteiro

    return 0;
}
