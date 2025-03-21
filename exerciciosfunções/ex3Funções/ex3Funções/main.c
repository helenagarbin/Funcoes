#include <stdio.h>
#include <stdlib.h>

void imprime(int m[][4],int n) //int n tem a ver com dimensão omitida
{
    int i, j;
    for(i=0; i<n; i++); //for de linhas
    {
        for(j=0; j<4; j++) //for de colunas
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matriz[3][4] ={{1,2,3,4},{50,60,70,80},{91,101,111,121}};

    imprime(matriz, 3);
}
