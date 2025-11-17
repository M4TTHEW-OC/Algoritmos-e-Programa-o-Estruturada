#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int senha;
    struct Pessoa* prox;
} Pessoa;

Pessoa* inicio = NULL;
Pessoa* fim = NULL;
int contadorSenha = 1;

void enfileirar(char nome[]) {
    Pessoa* novo = (Pessoa*) malloc(sizeof(Pessoa));
    strcpy(novo->nome, nome);
    novo->senha = contadorSenha++;
    novo->prox = NULL;

    if (fim == NULL) {
        inicio = fim = novo;
    } else {
        fim->prox = novo;
        fim = novo;
    }

    printf("Senha gerada: %d\n", novo->senha);
}

void desenfileirar() {
    if (inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    Pessoa* aux = inicio;
    printf("Chamando: %s (Senha %d)\n", aux->nome, aux->senha);

    inicio = inicio->prox;
    if (inicio == NULL) {
        fim = NULL;
    }

    free(aux);
}

void mostrarFila() {
    if (inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    Pessoa* aux = inicio;
    printf("\n--- Fila Atual ---\n");
    while (aux != NULL) {
        printf("Nome: %s | Senha: %d\n", aux->nome, aux->senha);
        aux = aux->prox;
    }
}

int main() {
    int opcao;
    char nome[50];

    do {
        printf("\nMENU\n");
        printf("1 - Gerar senha e enfileirar\n");
        printf("2 - Chamar proxima pessoa\n");
        printf("3 - Mostrar fila\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome: ");
                scanf(" %[^\n]", nome);
                enfileirar(nome);
                break;

            case 2:
                desenfileirar();
                break;

            case 3:
                mostrarFila();
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    Pessoa* aux;
    while (inicio != NULL) {
        aux = inicio;
        inicio = inicio->prox;
        free(aux);
    }

    return 0;
}
