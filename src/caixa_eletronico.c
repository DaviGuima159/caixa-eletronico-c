
#include <stdio.h>

int main() {
    // Declaracao das variaveis
    int saldo = 1000;
    int saque, restante;
    int nota100, nota50, nota20, nota10;
    int nota5, nota2, moeda1;

    // Solicita o valor do saque
    printf("=== CAIXA ELETRONICO ===\n");
    printf("Saldo disponivel: R$ %d\n", saldo);
    printf("Digite o valor do saque: R$ ");

    if (scanf("%d", &saque) != 1) {
        printf("Erro: digite um numero inteiro.\n");
        return 1;
    }

    // Verifica se o valor e positivo
    if (saque <= 0) {
        printf("Erro: valor de saque invalido.\n");
    }
    // Verifica se existe saldo suficiente
    else if (saque > saldo) {
        printf("Erro: saldo insuficiente.\n");
    }
    else {
        // Qualquer valor inteiro positivo pode ser
        // formado, pois existe moeda de R$ 1.
        restante = saque;

        // Calcula as notas usando divisao e modulo
        nota100 = restante / 100;
        restante = restante % 100;

        nota50 = restante / 50;
        restante = restante % 50;

        nota20 = restante / 20;
        restante = restante % 20;

        nota10 = restante / 10;
        restante = restante % 10;

        nota5 = restante / 5;
        restante = restante % 5;

        nota2 = restante / 2;
        restante = restante % 2;

        moeda1 = restante;

        // Exibe somente as notas utilizadas
        printf("\nSaque realizado com sucesso!\n");
        printf("Valor sacado: R$ %d\n", saque);
        printf("\nDistribuicao das cedulas:\n");

        if (nota100 > 0)
            printf("%d nota(s) de R$ 100\n", nota100);

        if (nota50 > 0)
            printf("%d nota(s) de R$ 50\n", nota50);

        if (nota20 > 0)
            printf("%d nota(s) de R$ 20\n", nota20);

        if (nota10 > 0)
            printf("%d nota(s) de R$ 10\n", nota10);

        if (nota5 > 0)
            printf("%d nota(s) de R$ 5\n", nota5);

        if (nota2 > 0)
            printf("%d nota(s) de R$ 2\n", nota2);

        if (moeda1 > 0)
            printf("%d moeda(s) de R$ 1\n", moeda1);

        // Atualiza o saldo apos o saque
        saldo = saldo - saque;
        printf("\nSaldo restante: R$ %d\n", saldo);
    }

    return 0;
}
