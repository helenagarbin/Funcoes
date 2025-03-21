#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*quilowatts de energia custa um mil�simo do sal�rio m�nimo.
receba o valor do sal�rio m�nimo e quantidade de quilowatts consumida por resid�ncia
retornar
a) valor de cada quilowatt, em reais
b) valor, pago por resid�ncia, em reais
c) valor pago com desconto de 15% */

//n�o vai retornar nd por isso void
//declar por referencia
//n�o � procedimento so de entrada, * por ser sa�da, produza e receba, var�veis de refer�ncia com *, n�o � multiplica��o
void calcKW(float salariomin, float quantidquilowatt, float *valquilowatt, float *valpago, float *valdesconto)
{
    (*valquilowatt) = salariomin/1000; //a)salariomin/1000; valquilowatt = salariomin/1000
    (*valpago) = (*valquilowatt)*quantidquilowatt; //b)valpago = valquilowatt*quantidquilowatt
    (*valdesconto) = (*valpago) * 0.85; //c)valordesconto = valpago * 0,85(calculo direto de desconto)
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salariomin, quantidquilowatt, valquilowatt, valpago, valdesconto;

    printf("Insira o sal�rio m�nimo:\n");
    scanf("%f", &salariomin);
    printf("Insira quantidade de quilowatts consumida:\n");
    scanf("%f", &quantidquilowatt);

    calcKW(salariomin, quantidquilowatt, /*valor de entrada e os com & de sa�da*/&valquilowatt, &valpago, &valdesconto);

    //invocar o procedimento
    printf("O valor de 1KW (em reais): %.2f.\n", valquilowatt);
    printf("O valor a ser pago pela resid�ncia (em reais): %.2f.\n", valpago);
    printf("O valor com desconto de 15% (em reais): %.2f.\n", valdesconto);

    return 0;
}
