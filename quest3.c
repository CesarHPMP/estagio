#include <stdio.h>

int main ()
{
    int k = 1, soma = 0;
    for(int indice = 12; k < indice; k++)
    {
        soma = soma + k;
        printf("a soma é  %d\n", soma);    
    }

    printf("a soma final foi  %d\n", soma);

    return 0;
}