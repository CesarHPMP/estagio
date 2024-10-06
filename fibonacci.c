#include <stdio.h>

int fibonacci(int n,int i, int fib) 
{
    if(fib == 0)
        return 1;
    if(i == fib)
        return 1;
    if(i > fib)
        return 0;

    return fibonacci(i, n + i, fib);  
}

int main() 
{
    int num, found;
    printf("Informe um número: ");
    scanf("%d", &num);

    found = fibonacci(0, 1, num);


    if(found) 
    {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}