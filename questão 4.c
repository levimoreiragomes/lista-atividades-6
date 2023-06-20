#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 100

typedef struct {
    int dados[TAM_MAX];
    int topo;
} Pilha;

void inicializarPilha(Pilha *pilha) {
    pilha->topo = -1;
}

int pilhaVazia(Pilha *pilha) {
    return pilha->topo == -1;
}

int pilhaCheia(Pilha *pilha) {
    return pilha->topo == TAM_MAX - 1;
}

void push(Pilha *pilha, int valor) {
    if (pilhaCheia(pilha)) {
        printf("Erro: a pilha esta cheia.\n");
        return;
    }

    pilha->topo++;
    pilha->dados[pilha->topo] = valor;
}

int pop(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: a pilha esta vazia.\n");
        return -1;
    }

    int valor = pilha->dados[pilha->topo];
    pilha->topo--;

    return valor;
}

void exibirPilha(Pilha *pilha) {
    printf("Conteudo da pilha:\n");

    if (pilhaVazia(pilha)) {
        printf("Pilha vazia.\n");
        return;
    }

    for (int i = pilha->topo; i >= 0; i--) {
        printf("%d\n", pilha->dados[i]);
    }
}

int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    int *ponteiro1, *ponteiro2, *ponteiro3;

    ponteiro1 = (int *)malloc(sizeof(int));
    ponteiro2 = (int *)malloc(sizeof(int));
    ponteiro3 = (int *)malloc(sizeof(int));

    printf("Digite o valor do ponteiro 1: ");
    scanf("%d", ponteiro1);
    printf("Digite o valor do ponteiro 2: ");
    scanf("%d", ponteiro2);
    printf("Digite o valor do ponteiro 3: ");
    scanf("%d", ponteiro3);

    push(&pilha, *ponteiro1);
    push(&pilha, *ponteiro2);
    push(&pilha, *ponteiro3);

    exibirPilha(&pilha);

    free(ponteiro1);
    free(ponteiro2);
    free(ponteiro3);

    return 0;
}
