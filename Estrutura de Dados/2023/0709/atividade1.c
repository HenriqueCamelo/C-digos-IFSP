#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *n;
    n = (int*) calloc(5, sizeof(int));

    if( n == NULL )
    {
        printf("ERRO: sem mem�ria! \n");
        exit(1); //encerra a exec��o em caso de erro
    }

    int x;
    printf("Digite um n�mero: ");
    scanf("%d", &x);


    int i = 0;
    for( i = 0; i <= x; i++)
    {

        n[i]= (i - 1) + (i + 2);
        printf(" %d -- %d \n", i , n[i]);

    }

    return 0;
}
