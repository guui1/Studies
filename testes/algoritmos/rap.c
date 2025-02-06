#include <stdio.h>
#include <string.h>
int main()
{
    char tests[10] = "a";
    int i = strlen(tests);
    printf("%d\n", i);
    while (i < 10)
    {
        printf("%s", tests);
        strcat(tests, tests);

        printf("%d\n", strlen(tests));
        i++;

    }
} 