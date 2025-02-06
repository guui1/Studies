#include <string.h>
int main()
{
    // Novo teste
    char dificil[]= "joao tem 25 anos";
    char nome_teste[20];
    int idade_teste;
    char teste[50];
    char test[20];

    printf("Digite um nome: ");
    scanf("%s", test);
    sprintf(teste, "ola senhor, %s, muito lindo o seu nome, igual a sua formosura de pessoa", test);

    char buf[100]; // por nao ter passado as chaves, fazendo que assim a variavel se torne um vetor com 100 espaços e cada caractere ocupe um deles, o codigo nao da o resultado esperado
    char str1[] = "Hello";
    int i = strlen(str1);
    printf("Comprimento da string: %d\n", i);
    strcpy(buf, str1);
    printf("Buffer: %s\n", buf);
    if (strcmp(buf, str1) == 0)
    {
        printf("As strings sao iguais\n");
    }
    else
    {
        printf("As strings sao diferentes\n");
    }
    printf("string 1: %s\nString 2: %s\n", buf, str1);
    strcat(buf, str1);
    printf("Buffer apos strcat: %s\n", buf);
    printf("%s\n", teste);
    sscanf(dificil,"%s tem %d anos", nome_teste, &idade_teste);   
    printf("%s ",dificil);
}