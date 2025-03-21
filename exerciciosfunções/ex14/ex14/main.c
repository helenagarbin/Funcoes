#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um programa que receba o n�mero de horas trabalhadas por um gestor e o valor do sal�rio m�nimo vigente.
Crie uma fun��o que calcule o sal�rio a receber do gestor, seguindo as regras abaixo:

I - a hora trabalhada vale a metade do sal�rio m�nimo;
II - o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da
hora trabalhada;
III - o imposto equivale a 3% do sal�rio bruto;
IV - o sal�rio a receber equivale ao sal�rio bruto menos o imposto.

Crie um algoritmo que invoque a respectiva fun��o e mostre o sal�rio a receber.*/

float calcSalarioReceber(float numhorastrab, float salariomin) //fun��o enunciado
{
    float horatrabalhada, salariobruto, imposto, salarioareceber;
    horatrabalhada = salariomin/2.0;
    salariobruto = numhorastrab*horatrabalhada;
    imposto = salariobruto*3/100;
    salarioareceber = salariobruto - imposto;
    return salarioareceber;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float horatrabalhada, salariomin, salarioareceber;

    printf("Insira o n�mero de horas trabalhadas:\n");
    scanf("%f", &horatrabalhada);
    printf("Insira o sal�rio m�nimo:\n");
    scanf("%f", &salariomin);

    salarioareceber = calcSalarioReceber(horatrabalhada, salariomin);

    printf("Salario a receber: R$ %.2f.\n", salarioareceber);

    return 0;

}
