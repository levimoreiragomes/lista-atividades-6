#include <stdio.h>

void dobrarNumero(int *ponteiro) {
    *ponteiro = *ponteiro * 2;
}

int main() {
    int numero;              // Variável inteira para armazenar o número

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);    // Lê o número inteiro fornecido pelo usuário

    printf("\nValor antes da chamada da funcao: %d\n", numero);

    dobrarNumero(&numero);   // Chama a função passando o endereço da variável 'numero'

    printf("Valor apos a chamada da funcao: %d\n", numero);

    return 0;
}
