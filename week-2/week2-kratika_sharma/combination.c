#include <stdio.h>

long int factorial(int n)
{
    int i;
    long int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
long int pcombination(int n, int r){

        return factorial(n) /
    (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;

    printf("enter the value of n");
    scanf("%d", &n);
    printf("enter the value of r");
    scanf("%d", &r);
    long int p = pcombination(n, r);
    printf("%ld", p);
    return 0;
}
