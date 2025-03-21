#include <stdio.h>
#include <stdlib.h>
//funções com parametros vetores
void imprime1(int v[], int n) //primeira sintaxe, indica tam n
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d", v[i]);
    }
}
void imprime2(int v[5]) //sintaxe com tam do vetor nos [ ]
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d", v[i]);
    }
}
void imprime3(int *v, int n) //indicar o tam n do vetor
{
     int i;
     for(i=0; i<n; i++)
     {
         printf("%d", v[i]);
     }
}
int main()
{
    int vet[5] = {1,2,3,4,5};

    puts("\nPrimeiro imprime:");
    imprime1(vet, 5);

    puts("\nSegundo Imprime:\n");
    imprime2(vet); //so recebe vet

    puts("\nTerceiro imprime:\n");
    imprime3(vet, 5); //similar a imprime1

}
