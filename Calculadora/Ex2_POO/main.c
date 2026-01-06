#include <stdio.h>
#include <stdlib.h>

int Soma(x, y){
    return x+y;
}

int subtracao(x, y)
{
    return x-y;
}
float multi(x,y)
{
    return x*y;
}
float divi(x, y)
{
    return x/y;
}

int main()
{
    int x, y;
    float n;
    printf("Digite dois valores:\n ");
    scanf("%d%d", &x, &y);
    n = Soma(x, y);
    printf("\n%f", n);
    n = subtracao(x, y);
    printf("\n%f", n);
    n = multi(x, y);
    printf("\n%f", n);
    n = divi(x, y);
    printf("\n%f", n);



    return 0;
}
