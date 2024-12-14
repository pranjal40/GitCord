#include<stdio.h>
int main()
{
int num,D,S=0,C=0;
//here D=digits ,S=sum,C=Total number of digits//
printf("enter any number: ");
scanf("%d",&num);
while(num!=0)
{
D=num%10;
S=S+D;
num=num/10;
C++;

}
printf("enter the total number of digits: %d \n",C);
printf("the total sum of digits is equals to : %d \n",S);
return 0;
}
