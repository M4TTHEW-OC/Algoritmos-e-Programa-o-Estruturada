#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    struct Pessoa* prox;
} Pessoa;

Pessoa* inicio = NULL;

void inserirInicio(char nome[], int idade, float altura) {
    Pessoa* novo = (Pessoa*) malloc(sizeof(Pessoa));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->altura = altura;
    novo->prox = inicio;
    inicio = novo;
}

void inserirFim(char nome[], int idade, float altura) {
    Pessoa* novo = (Pessoa*) malloc(sizeof(Pessoa));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->altura = altura;
    novo->prox = NULL;

    if (inicio == NULL) {
        inicio = novo;
        return;
    }

    Pessoa* aux = inicio;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
}

void removerPorNome(char nome[]) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    Pessoa* aux = inicio;
    Pessoa* ant = NULL;

    while (aux != NULL && strcmp(aux->nome, nome) != 0) {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == NULL) {
        printf("Nome nao encontrado!\n");
        return;
    }

    if (ant == NULL) {
        inicio = aux->prox;
    } else {
        ant->prox = aux->prox;
    }

    free(aux);
    printf("Pessoa removida!\n");
}

void mostrarLista() {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    Pessoa* aux = inicio;
    printf("\n--- Lista de Pessoas ---\n");
    while (aux != NULL) {
        printf("Nome: %s\n", aux->nome);
        printf("Idade: %d\n", aux->idade);
        printf("Altura: %.2f\n", aux->altura);
        printf("------------------------\n");
        aux = aux->prox;
    }
}

int main() {
    int opcao, idade;
    float altura;
    char nome[50];

    do {
        printf("\nMENU\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Inserir no fim\n");
        printf("3 - Remover por nome\n");
        printf("4 - Mostrar todos\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome: ");
                scanf(" %[^\n]", nome);
                printf("Idade: ");
                scanf("%d", &idade);
                printf("Altura: ");
                scanf("%f", &altura);
                inserirInicio(nome, idade, altura);
                break;

            case 2:
                printf("Nome: ");
                scanf(" %[^\n]", nome);
                printf("Idade: ");
                scanf("%d", &idade);
                printf("Altura: ");
                scanf("%f", &altura);
                inserirFim(nome, idade, altura);
                break;

            case 3:
                printf("Nome a remover: ");
                scanf(" %[^\n]", nome);
                removerPorNome(nome);
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

    Pessoa* aux;
    while (inicio != NULL) {
        aux = inicio;
        inicio = inicio->prox;
        free(aux);
    }

    return 0;
}
