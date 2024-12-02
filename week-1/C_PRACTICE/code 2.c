#include <stdio.h>
int AVG ( int a,int b,int c, int d,int e)
{
 return (a+b+c+d+e)/5; 
};

int main()
{
int a,b,c,d,e ;
printf( " enter a number a : ");
scanf("%d",&a);
printf( " enter a number b : ");
scanf("%d",&b);
printf( " enter a number c : ");
scanf("%d",&c);
printf( " enter a number d : ");
scanf("%d",&d);
printf( " enter a number e : ");
scanf("%d",&e);

printf("the average is %d :", AVG (a,b,c,d,e));

return 0 ; 
}