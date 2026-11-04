programa
{
    funcao inicio()
    {
        inteiro saldoDisponivel = 1000
        inteiro valorSaque, restante
        inteiro notas100, notas50, notas20, notas10
        inteiro notas5, notas2, moedas1

        // Entrada do valor desejado
        escreva("Digite o valor que deseja sacar: R$ ")
        leia(valorSaque)

        // Validacao do valor e do saldo
        se (valorSaque <= 0)
        {
            escreva("Erro: valor de saque invalido.\n")
        }
        senao se (valorSaque > saldoDisponivel)
        {
            escreva("Erro: saldo insuficiente.\n")
        }
        senao
        {
            // Distribuicao em ordem decrescente
            restante = valorSaque
            notas100 = restante / 100
            restante = restante % 100
            notas50 = restante / 50
            restante = restante % 50
            notas20 = restante / 20
            restante = restante % 20
            notas10 = restante / 10
            restante = restante % 10
            notas5 = restante / 5
            restante = restante % 5
            notas2 = restante / 2
            restante = restante % 2
            moedas1 = restante

            escreva("Saque realizado com sucesso!\n")
            escreva("Distribuicao das cedulas:\n")
            se (notas100 > 0) { escreva(notas100, " nota(s) de R$ 100\n") }
            se (notas50 > 0) { escreva(notas50, " nota(s) de R$ 50\n") }
            se (notas20 > 0) { escreva(notas20, " nota(s) de R$ 20\n") }
            se (notas10 > 0) { escreva(notas10, " nota(s) de R$ 10\n") }
            se (notas5 > 0) { escreva(notas5, " nota(s) de R$ 5\n") }
            se (notas2 > 0) { escreva(notas2, " nota(s) de R$ 2\n") }
            se (moedas1 > 0) { escreva(moedas1, " moeda(s) de R$ 1\n") }

            saldoDisponivel = saldoDisponivel - valorSaque
            escreva("Saldo restante: R$ ", saldoDisponivel, "\n")
        }
    }
}
