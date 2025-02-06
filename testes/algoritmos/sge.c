#include <stdio.h>
#include <string.h>
// Variaveis Globais
int totalEstoque = 100; // Variavel para o total de itens no estoque

// Funçõa para adicionar itens ao estoque
void adicionarEstoque(int quantidade)
{ // Parametro formal
    totalEstoque += quantidade;
    printf("Iteins adicionado com sucesso!\n");
    printf("Estoque atualizado: %d\n", totalEstoque);
}

// Funçõa para remover itens do estoque
void removerEstoque(int quantidade)
{
    if (quantidade <= totalEstoque)
    {
        totalEstoque -= quantidade;
        printf("Itens removido com sucesso!\n");
        printf("Estoque atualizado:  %d\n", totalEstoque);
    }
    else
    {
        printf("Não há itens suficientes no estoque.\n");
    }
}
// Funçõa principal
int main()
{
    // Variavel local para armazenar a quantidade de itens a ser processada.
    int quantidade;
    char operacao;
    printf("Informe a operacao a ser feita ao estoque: (A para adicionar) - (B para remover)");
    scanf("%c", &operacao);
    // Verificando a operacao escolhida e chamando a função correspondente.
    if (operacao == 'a')
    {
        printf("Informe a quantidade de itens a ser adicionado ao estoque: ");
        scanf("%d", &quantidade);
        adicionarEstoque(quantidade);
    }
    else
    {
        printf("Informe a quantidade de itens a ser removido do estoque: ");
        scanf("%d", &quantidade);
        removerEstoque(quantidade);
    };
}
