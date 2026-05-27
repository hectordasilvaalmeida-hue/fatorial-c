#include <stdio.h>
#include "function_fatorial.c"

int main()
{
    int n = 0;
    int resultado = 1;

    printf("digite um numero\n");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("o fatorial de %d é %d \n", n, resultado);
    printf("feito por Allyson Rodolfo");

    return 0;
}
