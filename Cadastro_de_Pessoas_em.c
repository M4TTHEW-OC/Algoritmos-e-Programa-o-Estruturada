#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define QTD_PESSOAS 5

struct Pessoa {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
};

int main() {
    struct Pessoa pessoas[QTD_PESSOAS];
    int ano_atual;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ano_atual = tm.tm_year + 1900;

    printf("=== CADASTRO DE %d PESSOAS ===\n", QTD_PESSOAS);

    for (int i = 0; i < QTD_PESSOAS; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);

        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        size_t len = strlen(pessoas[i].nome);
        if (len > 0 && pessoas[i].nome[len - 1] == '\n')
            pessoas[i].nome[len - 1] = '\0';

        printf("Ano de nascimento: ");
        while (scanf("%d", &pessoas[i].ano_nascimento) != 1 || pessoas[i].ano_nascimento < 1900 || pessoas[i].ano_nascimento > ano_atual) {
            printf("Ano inválido! Digite novamente: ");
            while (getchar() != '\n');
        }

        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &pessoas[i].sexo);
            pessoas[i].sexo = (char)toupper(pessoas[i].sexo);
            if (pessoas[i].sexo != 'M' && pessoas[i].sexo != 'F')
                printf("Entrada inválida! Digite 'M' ou 'F'.\n");
        } while (pessoas[i].sexo != 'M' && pessoas[i].sexo != 'F');

        printf("Altura (em metros): ");
        while (scanf("%f", &pessoas[i].altura) != 1 || pessoas[i].altura <= 0 || pessoas[i].altura > 3) {
            printf("Altura inválida! Digite novamente: ");
            while (getchar() != '\n');
        }

        printf("Peso (em kg): ");
        while (scanf("%f", &pessoas[i].peso) != 1 || pessoas[i].peso <= 0 || pessoas[i].peso > 500) {
            printf("Peso inválido! Digite novamente: ");
            while (getchar() != '\n');
        }

        printf("CPF (somente números): ");
        while (scanf("%lf", &pessoas[i].cpf) != 1 || pessoas[i].cpf <= 0) {
            printf("CPF inválido! Digite novamente: ");
            while (getchar() != '\n');
        }

        getchar();
    }

    printf("\n\n=============================================================\n");
    printf("                 LISTA DE PESSOAS CADASTRADAS               \n");
    printf("=============================================================\n");
    printf("%-25s %-10s %-6s %-10s %-10s %-15s\n", "Nome", "Idade", "Sexo", "Altura", "Peso", "CPF");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < QTD_PESSOAS; i++) {
        int idade = ano_atual - pessoas[i].ano_nascimento;
        printf("%-25s %-10d %-6c %-10.2f %-10.2f %-15.0lf\n",
               pessoas[i].nome,
               idade,
               pessoas[i].sexo,
               pessoas[i].altura,
               pessoas[i].peso,
               pessoas[i].cpf);
    }

    printf("=============================================================\n");
    printf("Total de pessoas cadastradas: %d\n", QTD_PESSOAS);
    printf("=============================================================\n");

    return 0;
}
