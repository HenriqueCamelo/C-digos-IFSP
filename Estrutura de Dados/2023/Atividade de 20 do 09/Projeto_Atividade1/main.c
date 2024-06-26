#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"

int main()
{
    int nH1, sH1, nF1, vPF1, taxaIR, salarioFamilia, salarioBruto, vantagens, INSS, IRPF, Deducoes;

    printf ("Digite o n�mero de horas trabalhadas: ");
    scanf("%d", &nH1);

    //nH = nH1;

    printf ("Digite o quanto recebe por hora: ");
    scanf("%d", &sH1);

    //sH = sH1;

    printf ("Digite o n�mero de filhos: ");
    scanf("%d", &nF1);

    //nF = nF1;

    printf ("Digite o quanto cada filhos ganha: ");
    scanf("%d", &vPF1);

    //vPF = vPF1

    printf("Insira a taxa de IR: ");
    scanf("%d", &taxaIR);

    calculoVantagens( nH1, sH1, nF1, vPF1, &salarioBruto, &salarioFamilia, &vantagens);
    calculoDeducoes(taxaIR, &INSS, &IRPF, &Deducoes, &salarioBruto);

    printf("\n\n\nSeu sal�rio bruto �: %d \n", salarioBruto);
    printf("Seu sal�rio Fam�lia �: %d \n", salarioFamilia);
    printf("Suas vantagens s�o: %d \n", vantagens);
    printf("Seu INSS �: %d \n", INSS);
    printf("Seu IRPF �: %d \n", IRPF);
    printf("A dedu��o �: %d \n", Deducoes);

    return 0;
}
