#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Pessoa{
        char nome[50];
        int idade;
        char telefone[15];
    };
    struct Pessoa lista[3];

    // Preenchendo as estruturas de dados
    strcpy(lista[0].nome,"gui");
    lista[0].idade = 20;
    strcpy(lista[0].telefone,"123456789");

    strcpy(lista[1].nome,"dudinha");
    lista[1].idade = 18;
    strcpy(lista[1].telefone,"love my life");

    strcpy(lista[2].nome,"bebel");
    lista[2].idade = 15;
    strcpy(lista[2].telefone,"987654321");
    

    // Laço para imprimir os dados por base do indice da lista[1,2,3].
    int i = 0;
    for (i = 0; i <3; i++) {
        printf("Nome: %s\nIdade: %d\nTelefone: %s\n", lista[i].nome, lista[i].idade, lista[i].telefone);
    }
    // Criando e inicializando estruturas de dados
    // struct Pessoa pessoa1= {"Guilherme",20,"123456789"};
    // struct Pessoa pessoa2 = {"Dudinha",18,"love my life"};

    // // Outra forma de declarar as camadas do formulario
    // struct Pessoa pessoa3;
    // strcpy(pessoa3.nome, "Bebel");
    // pessoa3.idade = 15;
    // strcpy(pessoa3.telefone, "987654321");


    // printf("Nome: %s\nIdade: %d\nTelefone: %s\n", pessoa2.nome, pessoa2.idade, pessoa2.telefone);
    // printf("Nome: %s\nIdade: %d\nTelefone: %s\n", pessoa1.nome, pessoa1.idade, pessoa1.telefone);
    // printf("Nome: %s\nIdade: %d\nTelefone: %s\n", pessoa3.nome, pessoa3.idade, pessoa3.telefone);
return 0;
}