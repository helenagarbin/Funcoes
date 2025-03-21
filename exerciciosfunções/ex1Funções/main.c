#include <stdio.h>
#include <stdlib.h>

//criação de uma função que receba 2 numeros, vai comparar os numeros, vai retornar o maior entre eles
float maior(float num1, float num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;
}
//se for igual tanto faz
int main()
{
    float x, y, m;
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("Insira mais um valor:\n");
    scanf("%f", &y);

    m = maior(x,y); //invocar pra usar a função criada, x num1 e y num2 (cria dois espaços)

    printf("Maior: %.2f\n", m);
}
