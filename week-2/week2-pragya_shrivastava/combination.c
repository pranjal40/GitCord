#include<stdio.h>

long fact(int n){
if(n==0){
return 1;}
return n*fact(n-1);
}
long combination(int n,int r)
{long C=fact(n)/(fact(r)*fact(n-r));
return C;
}
int main()
{
int n,r;
long ans;
printf("enter n: ");
scanf("%d",&n);
printf("enter r : ");
scanf("%d" ,&r);
ans = combination(n,r);
printf("the total combinations are %ld " , ans);
return 0;
}
