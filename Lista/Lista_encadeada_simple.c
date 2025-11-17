#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* prox;
} No;

No* inicio = NULL;

void inserirInicio(int v) {
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = v;
    novo->prox = inicio;
    inicio = novo;
}

void inserirFim(int v) {
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = v;
    novo->prox = NULL;

    if (inicio == NULL) {
        inicio = novo;
        return;
    }

    No* aux = inicio;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
}

void removerValor(int v) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    No* aux = inicio;
    No* anterior = NULL;

    while (aux != NULL && aux->valor != v) {
        anterior = aux;
        aux = aux->prox;
    }

    if (aux == NULL) {
        printf("Valor nao encontrado!\n");
        return;
    }

    if (anterior == NULL) {
        inicio = aux->prox;
    } else {
        anterior->prox = aux->prox;
    }

    free(aux);
    printf("Valor removido!\n");
}

void mostrarLista() {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    No* aux = inicio;
    printf("Lista: ");
    while (aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

int main() {
    int opcao, valor;

    do {
        printf("\nMENU\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Inserir no fim\n");
        printf("3 - Remover por valor\n");
        printf("4 - Mostrar lista\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                inserirInicio(valor);
                break;

            case 2:
                printf("Valor: ");
                scanf("%d", &valor);
                inserirFim(valor);
                break;

            case 3:
                printf("Valor a remover: ");
                scanf("%d", &valor);
                removerValor(valor);
                break;

            case 4:
                mostrarLista();
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    No* aux;
    while (inicio != NULL) {
        aux = inicio;
        inicio = inicio->prox;
        free(aux);
    }

    return 0;
}

