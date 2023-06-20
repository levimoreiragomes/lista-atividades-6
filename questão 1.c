#include <stdio.h>

int main() {
    int numero;              // Variável inteira para armazenar o número
    int *ponteiro;           // Variável ponteiro

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);    // Lê o número inteiro fornecido pelo usuário

    ponteiro = &numero;      // Atribui o endereço da variável 'numero' ao ponteiro

    printf("\nValor antes da troca:\n");
    printf("Numero: %d\n", numero);
    printf("Ponteiro: %d\n", *ponteiro);

    *ponteiro = 42;          // Altera o valor da variável através do ponteiro

    printf("\nValor apos a troca:\n");
    printf("Numero: %d\n", numero);
    printf("Ponteiro: %d\n", *ponteiro);

    return 0;
}
