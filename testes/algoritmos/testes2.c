#include <stdio.h>
int main()
{
    FILE *pont_arq;
    char nome[50];
    int idade;
    char profi[50];
    int cod;
    // abrindo o arquivo para a escrita
    pont_arq = fopen("dados2.txt", "w");
    if (pont_arq == NULL)
    {
        printf("Error");
        return 1;
    }
    // gravando dados do arquivo
    printf("digite o seu nome: ");
    scanf("%s", &nome);
    printf("Qual a sua idade: ");
    scanf("%d", &idade);
    printf("Qual profissão deseja seguir: ");
    scanf("%s", &profi);
    printf("Qual o codigo de verificação: ");
    scanf("%d", &cod);
    // Gravando os dados no arquivo
    fprintf(pont_arq, "Nome de usuario recebido: %s\nIdade recebida: %d\nProfissao Desejada: %s\nCodigo de usuario: %d\n", nome, idade, profi, cod);
    // fechando os arquivos
    fclose(pont_arq);
    // leitura dos dados do arquivo
    pont_arq = fopen("dados2.txt", "r");
    if (pont_arq == NULL)
    {
        printf("Error");
        return 1;
    }
    // lendo os dados do arquivo
    fscanf(pont_arq, "Nome de usuario: %s\nIdade do usuario: %d\nProfissão desejada: %s\nCodigo escrito: %d\n", nome, &idade, profi, &cod);
    // exibindo os dados lidos
    printf("Dados Obtidos nos arquivos: \n");
    printf("Nome de usuario: %s\nIdade do usuario: %d\nProfissão desejada: %s\nCodigo escrito: %d\n", nome, idade, profi, cod);
    // fechando o arquivo
    fclose(pont_arq);
    return 0;
}