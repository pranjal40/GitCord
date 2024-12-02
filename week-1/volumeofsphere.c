#include<stdio.h>
int main()
{
    int r;

    printf("Radius of sphere:");
    scanf("%d",&r);

    printf("Volume of sphere=%f",(4*3.14*r*r*r)/3);

    return 0;
}