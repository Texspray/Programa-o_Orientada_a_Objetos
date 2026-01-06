#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    float  soma, subtracao, multiplicacao, divisao;
    printf("Digite dois valores: ");
    scanf("%d%d", &x, &y);
    soma = x + y;
    printf("\n%f", soma);
    subtracao= x-y;
    printf("\n%f", subtracao);
    multiplicacao = x*y;
    printf("\n%f", multiplicacao);
    divisao = x/y;
    printf("\n%f", divisao);
    return 0;
}
