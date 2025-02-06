#include <stdio.h>
int main()
{
    FILE *arquivo; // Ponteiro para o arquivo
    char nome[50];
    int idade;
    // abrindo o arquivo no medo de escrita
    arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    // Gravando os dados no arquivo
    printf("DIGITE O NOME: ");
    scanf("%s", &nome);
    printf("Digite  a idade: ");
    scanf("%d", &idade);
    // gravando os dados no arquivo
    fprintf(arquivo, "Nome: %s\nIdade: %d\n", nome, idade);
    // fechando o arquivo
    fclose(arquivo);
    // Leitura dos dados do arquivo
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    // lendo os dados do arquivo
    fscanf(arquivo, "Nome: %s\nIdade: %d\n", nome, &idade);
    // exibindo os dados lidos
    printf("Dados lidos do arquivo: \n");
    printf("Nome: %s\nIdade: %d\n", nome, idade);
    // fechando o arquivo
    fclose(arquivo);
    return 0;
}
