#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

struct Pessoa {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    char cpf[12];
};

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void extrair_digitos(const char *entrada, char *saida) {
    int j = 0;
    for (int i = 0; entrada[i] != '\0'; i++) {
        if (isdigit((unsigned char)entrada[i]) && j < 11) {
            saida[j++] = entrada[i];
        }
    }
    saida[j] = '\0';
}

int cpf_sequencia(const char *cpf) {
    for (int i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) return 0;
    }
    return 1;
}

int validar_cpf(const char *entrada) {
    char c[12];
    extrair_digitos(entrada, c);
    if (strlen(c) != 11) return 0;
    if (cpf_sequencia(c)) return 0;

    int soma = 0, resto, dig1, dig2;
    for (int i = 0, peso = 10; i < 9; i++, peso--) soma += (c[i] - '0') * peso;
    resto = soma % 11;
    dig1 = (resto < 2) ? 0 : 11 - resto;
    if (dig1 != (c[9] - '0')) return 0;

    soma = 0;
    for (int i = 0, peso = 11; i < 10; i++, peso--) soma += (c[i] - '0') * peso;
    resto = soma % 11;
    dig2 = (resto < 2) ? 0 : 11 - resto;
    if (dig2 != (c[10] - '0')) return 0;

    strcpy((char *)entrada, c);
    return 1;
}

void cadastrar() {
    struct Pessoa p;
    FILE *arquivo = fopen("pessoas.dat", "ab");
    if (!arquivo) {
        printf("Erro ao abrir arquivo.\n");
        return;
    }

    limpar_buffer();
    printf("\n--- Cadastro de Pessoa ---\n");
    printf("Nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    size_t len = strlen(p.nome);
    if (len > 0 && p.nome[len - 1] == '\n') p.nome[len - 1] = '\0';

    printf("Ano de nascimento: ");
    scanf("%d", &p.ano_nascimento);

    do {
        printf("Sexo (M/F): ");
        scanf(" %c", &p.sexo);
        p.sexo = (char)toupper(p.sexo);
        limpar_buffer();
    } while (p.sexo != 'M' && p.sexo != 'F');

    printf("Altura (m): ");
    scanf("%f", &p.altura);

    printf("Peso (kg): ");
    scanf("%f", &p.peso);
    limpar_buffer();

    char entrada[64];
    do {
        printf("CPF (11 digitos, com ou sem pontuacao): ");
        if (!fgets(entrada, sizeof(entrada), stdin)) entrada[0] = '\0';
        if (validar_cpf(entrada)) {
            strcpy(p.cpf, entrada);
            break;
        } else {
            printf("CPF invalido, tente novamente.\n");
        }
    } while (1);

    fwrite(&p, sizeof(struct Pessoa), 1, arquivo);
    fclose(arquivo);
    printf("\nPessoa cadastrada com sucesso!\n");
}

void listar() {
    struct Pessoa p;
    FILE *arquivo = fopen("pessoas.dat", "rb");
    if (!arquivo) {
        printf("\nNenhum cadastro encontrado.\n");
        return;
    }

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano_atual = tm.tm_year + 1900;
    int contador = 0;

    printf("\n=============================================================\n");
    printf("                    LISTA DE PESSOAS CADASTRADAS             \n");
    printf("=============================================================\n");
    printf("%-25s %-8s %-6s %-10s %-10s %-12s\n", "Nome", "Idade", "Sexo", "Altura", "Peso", "CPF");
    printf("-------------------------------------------------------------\n");

    while (fread(&p, sizeof(struct Pessoa), 1, arquivo) == 1) {
        int idade = ano_atual - p.ano_nascimento;
        printf("%-25s %-8d %-6c %-10.2f %-10.2f %-12s\n",
               p.nome, idade, p.sexo, p.altura, p.peso, p.cpf);
        contador++;
    }

    fclose(arquivo);

    if (contador == 0)
        printf("\nNenhuma pessoa cadastrada.\n");
    else
        printf("\nTotal de pessoas cadastradas: %d\n", contador);
}

int main() {
    int opcao;
    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar pessoa\n");
        printf("2 - Listar pessoas\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            limpar_buffer();
            opcao = 0;
        }

        switch (opcao) {
            case 1: cadastrar(); break;
            case 2: listar(); break;
            case 3: printf("Saindo...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 3);

    return 0;
}
