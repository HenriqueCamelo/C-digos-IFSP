#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "listaLigada.h"

char continuar = 's';

int main()
{
//setlocale(LC_ALL, "Portuguese");


    int x = 0;

    int matricula = 130, posicao = 1, matriEsc, elemenDel, escolha;

    ALUNO al1, al2, al3, al, usuario;

    al1.matricula = 110;
    al1.n1 = 5.6;
    al1.n2 = 6.3;
    al1.n3 = 7.9;
    al2.matricula = 130;
    al2.n1 = 9.2;
    al2.n2 = 3.5;
    al2.n3 = 7.9;
    al3.matricula = 120;
    al3.n1 = 6.6;
    al3.n2 = 2.1;
    al3.n3 = 9.2;


    printf("Iniciando...\n");
        Lista *li;

        li = criaLista();


        if(listaCheia(li))
        {
            printf("\nLista esta cheia !");
        }
        else
        {
            printf("\nLista n�o esta cheia !");
        }

        if(listaVazia(li))
        {
            printf("\nLista esta vazia");
        }
        else
        {
            printf("\nlista n�o esta vazia");
        }

        x = insere_inicio_lista(li, al1);
        if(x)
        {
            printf("\nInser��o no in�cio com sucesso");
        }
        else
        {
            printf("\nInser��o no �nicio sem sucesso");
        }

        x = insere_final_lista(li, al2);
        if(x)
        {
            printf("\nInserindo no final com sucesso!");
        }
        else
        {
            printf("\nN�o foi poss�vel inserir");
        }

        x = insere_lista_ordenada(li, al3);
        if(x)
        {
            printf("\nInserido ordenadamente");
        }
        else
        {
            printf("\nN�o Inserido ordenadamente");
        }

        x = tamLista(li);
        printf("\nO tamanho da lista atualmente �: %d", x);




        printf("\n\nCarregamento Completo!\n");
        system("pause");
        system("cls");

    //Atividade ************************************************************************************

        while(continuar == 's')
    {

        printf("Escolha uma das seguintes op��es: \n(1)Inserir um elemento de forma ordenada \n(2)Buscar um elemento por conte�do \n(3)Excluir um elemento de forma ordenada\n(4)Encerrar o programa\n");
        scanf("%d", &escolha);

        switch(escolha)
        {
            case 1:
                usuario = coletadados();

                x = insere_lista_ordenada(li, usuario);
                    if(x)
                    {
                        printf("\n Usuarios Inserido ordenadamente com sucesso");
                    }
                    else
                    {
                        printf("\n N�o Inser��o de usuarios ordenadamente");
                    }
                    x = tamLista(li);
                    printf("\nO tamanho da lista atualmente �: %d\n", x);

                    system("pause");
                    system("cls");
                    break;

            case 2:
                printf("\n\nDigite a matr�cula do elemento que deseja ver: ");
                scanf("\n%d", &matricula);

                x = consulta_lista_mat(li, matricula, &al);

                    if(x)
                    {
                        printf("\n\nConteudo na matr�cula %d: ", matricula);
                        printf("\n%d", al.matricula);
                        printf("\n%.2f",al.n1);
                        printf("\n%.2f",al.n2);
                        printf("\n%.2f\n",al.n3);
                    }
                    else
                    {
                        printf("\nElemento %d nao encontrado:", matriEsc);
                    }
                    system("pause");
                    system("cls");
                    break;

            case 3:
                    printf("\n\nDigite a matr�cula do elemento que deseja excluir: ");
                    scanf("\n%d", &elemenDel);

                    x = remove_lista(li, elemenDel);
                    if(x)
                    {
                        printf("\n Elemento removido com sucesso\n");
                    }
                    else
                    {
                        printf("\nN�o Elemento removido com sucesso\n");
                    }
                    system("pause");
                    system("cls");
                    break;

            case 4:
                    printf("Deseja continuar a rodar o programa ?: ");
                    scanf(" %c", &continuar);

                    x = remove_lista(li, matricula);
                    if(x)
                    {
                        printf("\n Elemento removido com sucesso\n");
                    }
                    else
                    {
                        printf("\nr�o Elemento removido com sucesso\n");
                    }

                    x = remove_inicio_lista(li);
                    if(x)
                    {
                        printf("\n Removido do inicio");
                    }
                    else
                    {
                        printf("\n n removido do inicio");
                    }

                    x = remove_final_lista(li);
                    if(x)
                    {
                        printf("\n Removido do final");
                    }
                    else
                    {
                        printf("\n N�o removido do final");
                    }

                    apagaLista(li);
                    system("cls");
                    break;

            default:
                    printf("\nOp��o inv�lida");
                    system("pause");
                    system("cls");
                    break;


        }


    }

}
