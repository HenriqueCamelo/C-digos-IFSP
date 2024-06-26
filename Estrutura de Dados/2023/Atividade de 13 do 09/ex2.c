#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func(int n);
int func_in(int x);

int main()
{
    int r, i;
    int resultado;
    char resposta;

    printf("Desja usar a fun��o recursiva ? (caso contr�rio ser� usada a fun��o interativa) (s/n): ");
    scanf(" %c", &resposta);

    if(resposta == 's')
    {
    printf("\n\nvers�o recursiva escolhida");
    printf("\nDigite um n�mero para soma-lo com seus antecessores: ");
    scanf("%d", &r);

    resultado = func(r);

    printf("%d \n\n", resultado);

    }
    else
    {

    printf("\n\nvers�o interativa escolhida");
    printf("\nDigite um n�mero para soma-lo com seus antecessores: ");
    scanf("%d", &i);

    resultado = func_in(i);

    printf("%d \n\n", resultado);

    }

    return 0;
}

int func(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return (n + func(n - 1));
    }
}

int func_in(int x)
{
    int a, b = 0;
    for(a = x; a > 0; a--)
    {
        b = b + a;
    }
        return b;
}
