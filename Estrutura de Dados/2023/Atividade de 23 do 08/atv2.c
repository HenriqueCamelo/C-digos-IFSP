#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    int num1, num2, *point1, *point2;

    printf("\nEscreva o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nEscreva o segundo numero: ");
    scanf("%d", &num2);

    point1 = &num1;
    point2 = &num2;


    if(&num1 > &num2)
    {
        printf("\nO endere�o da primeira variavel: %p, � maior que a da segunda variavel: %p", point1, point2 );
        printf("\nO conte�do da maior variavel �: %d, enquanto o da menor �: %d\n\n\n", *point1, *point2);
    }
    else
    {

        printf("\nO endere�o da segunda variavel: %p, � maior que a da primeira variavel: %p", point2, point1 );
        printf("\nO conte�do da maior variavel �: %d, enquanto o da menor �: %d\n\n\n", *point2, *point1);


    }




    return 0;
}







