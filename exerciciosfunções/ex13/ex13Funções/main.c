#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*O custo de um carro novo ao consumidor final é o preço de fábrica somado ao percentual de lucro do
distribuidor, acrescido dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de
fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos.

Em cada item, crie uma função distinta para calcular e retornar:

a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.

Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque cada
uma das funções, mostrando o lucro do distribuidor, os impostos e o valor final do
veículo*/

//função para o item a, b e c  (distintos), float por ser dinheiro, modularizar as funções:
float calcLucroDistri(float precofabrica, float porcentdistribui)
{
    return precofabrica*porcentdistribui/100;
}
float calcImpostos(float precofabrica, float porcentimposto)
{
    return precofabrica*porcentimposto/100;
}
float calcPrecoFinal(float precofabrica, float valordistribui, float valorimposto)
{
    return precofabrica + valordistribui + valorimposto;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float precofabrica, porcentdistribui, porcentimposto, lucrodistribuidor, imposto, valorfinal;

    printf("Insira o preço de fábrica:\n");
    scanf("%f", &precofabrica);
    printf("Insira a percentual de lucro do distribuidor:\n");
    scanf("%f", &porcentdistribui);
    printf("Insira o percentual de imposto:\n");
    scanf("%f", &porcentimposto);

    //invocar funções, desvia para as funções la de cima
    lucrodistribuidor = calcLucroDistri(precofabrica, porcentdistribui); //calcular lucro distribuidor, desvia pra outra função em cima: calcLucroDistri
    imposto = calcImpostos(precofabrica, porcentimposto);
    valorfinal = calcPrecoFinal(precofabrica, lucrodistribuidor, imposto); //n posso inverter as ordens das variáveis, passar argumentos que foram copiados pros de cima em ordem

    printf("Lucro distribuidor: R$ %.2f.\n", lucrodistribuidor);
    printf("Impostos: R$ %.2f.\n", imposto);
    printf("Valor Final: R$ %.2f.\n", valorfinal);
}
