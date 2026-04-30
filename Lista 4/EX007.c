/*
    Autor: Aguinaldo Alves
    Data: 05/04/2026
    Objetivo: Cálculo de Gratiﬁcação por Vendas
              Enunciado: Um vendedor recebe um salário ﬁxo e 5% de comissão sobre as vendas. Informe o
              salário ﬁxo e o total de vendas para calcular o salário ﬁnal. Se o total das vendas
              for maior do que R$1.000,00, adicionar uma gratiﬁcação de R$150,00.
                Exemplo: Entrada: Salário ﬁxo: R$2000, Vendas: R$5000
                         Saída: Salário ﬁnal: R$2400
                         Fórmula: Salário Final = Salário Fixo + (Vendas × 0.05) + Gratiﬁcação (se aplicável)
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declaração de variáveis
    float salariofixo;
    float valorvendas;
    float comissao;
    float gratificacao;
    float salariofinal;

    // Solicitando o salário do colaborador e total de vendas 
    printf ("Entre com o saláro fixo do colaborador..................: ");
    scanf ("%f", &salariofixo);
    printf ("Entre com o valor total das vendas do período...........: ");
    scanf ("%f", &valorvendas);

    // Calculando a comissão
    comissao = (valorvendas / 100) * 5;
    
    // Cálculando gratificação e salário final.
    if (valorvendas > 1000.00) {
        gratificacao = 150.00;
        printf ("O salário fixo é de:................................R$ %.2f \n", salariofixo);
        printf ("O valor da comissão é de............................R$ %.2f \n", comissao);
        printf ("O valor da gratificação é de........................R$ %.2f \n", gratificacao);

        // Calculando salário final
        salariofinal = salariofixo + comissao + gratificacao;
        printf ("O valor do salário final é de.......................R$ %.2f \n", salariofinal);

    } else {
        printf ("O salário fixo é de:................................R$ %.2f \n", salariofixo);
        printf ("O valor da comissão é de............................R$ %.2f \n", comissao);

        // Calculando salário final
        salariofinal = salariofixo + comissao;
        printf ("O valor do salário final é de.......................R$ %.2f \n", salariofinal);        
    }

    return 0;
}