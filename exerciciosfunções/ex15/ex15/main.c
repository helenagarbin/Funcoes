#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*quilowatts de energia custa um milésimo do salário mínimo.
receba o valor do salário mínimo e quantidade de quilowatts consumida por residência
retornar
a) valor de cada quilowatt, em reais
b) valor, pago por residência, em reais
c) valor pago com desconto de 15% */

//não vai retornar nd por isso void
//declar por referencia
//não é procedimento so de entrada, * por ser saída, produza e receba, varáveis de referência com *, não é multiplicação
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

    printf("Insira o salário mínimo:\n");
    scanf("%f", &salariomin);
    printf("Insira quantidade de quilowatts consumida:\n");
    scanf("%f", &quantidquilowatt);

    calcKW(salariomin, quantidquilowatt, /*valor de entrada e os com & de saída*/&valquilowatt, &valpago, &valdesconto);

    //invocar o procedimento
    printf("O valor de 1KW (em reais): %.2f.\n", valquilowatt);
    printf("O valor a ser pago pela residência (em reais): %.2f.\n", valpago);
    printf("O valor com desconto de 15% (em reais): %.2f.\n", valdesconto);

    return 0;
}
