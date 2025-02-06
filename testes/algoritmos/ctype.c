#include <ctype.h>
#include <stdio.h>

int main()
{
    char texto[] = "Programacao123";
    int i = 0;

    // percorrendo cada caractere da string
    while (texto[i])
    {
        // verificando se é uma letra
        if (isalpha(texto[i]))
        {
            printf("%c - uma letra.\n", texto[i]);
            // tranformando em maiusculo se for minuscula
            if (islower(texto[i]))
            {
                texto[i] = toupper(texto[i]);
                printf("Convertido para maiusculo: %c.\n", texto[i]);
            }
        } // verificando se um numero
        else if (isdigit(texto[i]))
        {
            printf("%c - um numero.\n", texto[i]);
        }
        i++;
    }
    printf("texto transformado: %s\n", texto);
}