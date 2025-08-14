#include <stdio.h>

int main() {
    int i, num1, num2;
    char operacao;

    // 🧮 ATRIBUIÇÃO:
    // Aqui estamos armazenando valores digitados pelo usuário em variáveis.
    // Isso segue o processo descrito no documento: a CPU reserva espaço na memória
    // e armazena o valor fornecido, acessando depois sempre que precisar.
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // 🔁 LOOP:
    // O 'for' vai repetir um bloco de instruções 4 vezes, permitindo executar diferentes operações.
    // Como explicado no documento, loops são controlados por contadores ou condições.
    for (i = 0; i < 4; i++) {
        printf("\nEscolha a operacao (+, -, *, /): ");
        scanf(" %c", &operacao); // espaço antes do %c para ignorar enter anterior

        // ✅ CONDICIONAL:
        // Aqui usamos if/else if para decidir qual bloco de código executar.
        // Como no exemplo do documento (x == 5), o resultado de uma comparação
        // é verdadeiro ou falso e controla o fluxo do programa.
        if (operacao == '+') {
            // ➕ OPERAÇÃO MATEMÁTICA:
            // A adição é processada pela ULA (Unidade Lógica e Aritmética) de forma rápida.
            printf("Resultado: %d\n", num1 + num2);
        } 
        else if (operacao == '-') {
            // ➖ Subtração
            printf("Resultado: %d\n", num1 - num2);
        } 
        else if (operacao == '*') {
            // ✖ Multiplicação
            printf("Resultado: %d\n", num1 * num2);
        } 
        else if (operacao == '/') {
            // ➗ Divisão — com condicional extra para evitar erro de divisão por zero.
            if (num2 != 0) {
                printf("Resultado: %.2f\n", (float)num1 / num2);
            } else {
                printf("Erro: divisao por zero!\n");
            }
        } 
        else {
            // Caso o usuário digite algo inválido.
            printf("Operacao invalida!\n");
        }
    }

    printf("\nPrograma encerrado.\n");
    return 0;
}
