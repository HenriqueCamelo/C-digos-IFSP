#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *n;
    int a;
    int media;
    int resultado;

    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &a);

    n = (int*) calloc(a, sizeof(int));

    if( n == NULL )
    {
        printf("ERRO: sem mem�ria! \n");
        exit(1); //encerra a exec��o em caso de erro
    }


    int i = 0;
    for( i = 0; i < a; i++)
    {
        printf("Digite a nota do aluno[%d], apertando ENTER para digitar a pr�xima nota: ", i + 1);
        scanf("%d", &n[i]);
        media = media + n[i];
    }

    printf("\nNotas digitas:\n");

    for( i = 0; i < a; i++)
    {
        printf(" %d \n", n[i]);
    }

    printf("\n");

    resultado = media/a;

    printf("A m�dia aritim�tica da sala �: %d \n", resultado);






    return 0;
}
