#include <stdio.h>
#include <stdlib.h>

struct operacoes
{
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;
};

struct operacoes op;


int main()
{
    int x, y;
    printf("Digite dois valores:\n ");
    scanf("%d%d", &x, &y);
    op.soma = x+y;
    printf("\n%d", op.soma);
    op.subtracao = x-y;
    printf("\n%d", op.subtracao);
    op.multiplicacao = x*y;
    printf("\n%d", op.multiplicacao);
    op.divisao = x/y;
    printf("\n%d", op.divisao);

    return 0;
}
