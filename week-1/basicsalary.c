#include<stdio.h>
int main()
{
    char k[50];
    
    printf("Name of Emplyoee:");
    scanf("%s",&k);

    float m,n,l,o;

    printf("Basic Salary:");
    scanf("%f",&m);

    o=0.2*m;
    printf("Dareness Allowance:%f\n",o);

    l=0.15*m;
    printf("EFP:%f\n",l);

    n=0.1*m;
    printf("Home Allowance:%f\n",n);

    printf("total salary:%f",m+n+l+o);

    return 0;
}