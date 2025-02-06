#include <stdio.h>
int main (){
   int cadastro, ativo, logado;
    char option;

    cadastro = ativo = logado = 0;

    printf("Deseja cadastrar a sua conta ? (S/N) \n");
    scanf("%c", &option);
    if (option == 'S') {
        cadastro = 1;
        printf("Conta cadastrada com sucesso \n");
    };

    printf("Deseja ativar a sua conta ?: S/N \n");
    scanf("%c", &option);
    if(option == 'S'){
        ativo = 1;
        printf("Conta ativada com sucesso \n");
    };

    printf("Deseja logar a sua conta ?: \n");
    scanf("%c", &option);
    if(option == 'S'){
        logado = 1;
        printf("Conta logada com sucesso");
    };

    if ((cadastro == 1) && (ativo ==1) && ( logado == 1)){
        printf("\n Seja bem vindo");
    }else{
        printf("\n Algo deu errado");
        if(logado == 0){
            printf("\n Você ainda não está logado");
        };
        if(ativo == 0){
            printf("\n Sua conta ainda não está ativa");
        };
        if(cadastro == 0){
            printf("\n Você ainda não possui cadastro");
        };
    };

return 0;
};


