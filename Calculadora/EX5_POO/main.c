#include <stdio.h>
#include <stdlib.h>

int Menu(x, y, i)
{
    float z;
    while(i!=7){
       switch(i){
        case 1:
            break;
        case 2:
            z = x+y;
            break;
        case 3:
            z = x-y;
            break;
        case 4:
            z = x*y;
            break;
        case 5:
            z = x/y;
            break;
        case 6:
            printf("\nO valor da operacao eh: %f", z);
            break;
        default:
            printf("\nOpção não valida\n");
            break;
                }
       printf("\n\n\n\n\n\n\n|----------Escolha uma das opcoes--------------|\n"
               "\n2)Soma"
               "\n3)Subtracao"
               "\n4)Multiplicacao"
               "\n5)Divisao"
               "\n6)Mostrar Resultado"
               "\n7)Sair\n");
       scanf("\n%d", &i);
       if(i==7)
        printf("\nO programa parou.\n");




    }

   return 0;
}

int main()
{
    int x, y, i = 0;
    printf("\n|----------Escolha uma das opcoes--------------|\n"
               "\n1) Entrar com os valores"
               "\n2)Soma"
               "\n3)Subtracao"
               "\nMultiplicacao"
               "\n5)Divisao"
               "\n6)Mostrar Resultado"
               "\n7)Sair\n");
       scanf("\n%d", &i);
       if(i==1){
        scanf("%d%d", &x, &y);
        Menu(x, y, i);
       }
       else
        printf("\nPor favor, primeiro entre os valores de x e y: \n");
        scanf("%d%d", &x, &y);
        Menu(x, y, i);


    return 0;
}
