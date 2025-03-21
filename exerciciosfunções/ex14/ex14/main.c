#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que receba o número de horas trabalhadas por um gestor e o valor do salário mínimo vigente.
Crie uma função que calcule o salário a receber do gestor, seguindo as regras abaixo:

I - a hora trabalhada vale a metade do salário mínimo;
II - o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da
hora trabalhada;
III - o imposto equivale a 3% do salário bruto;
IV - o salário a receber equivale ao salário bruto menos o imposto.

Crie um algoritmo que invoque a respectiva função e mostre o salário a receber.*/

float calcSalarioReceber(float numhorastrab, float salariomin) //função enunciado
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

    printf("Insira o número de horas trabalhadas:\n");
    scanf("%f", &horatrabalhada);
    printf("Insira o salário mínimo:\n");
    scanf("%f", &salariomin);

    salarioareceber = calcSalarioReceber(horatrabalhada, salariomin);

    printf("Salario a receber: R$ %.2f.\n", salarioareceber);

    return 0;

}
