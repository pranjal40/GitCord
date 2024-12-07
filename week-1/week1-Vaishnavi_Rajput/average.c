#include<stdio.h>
//program to take input 5 no. and find their avg
void main()
{
 int i,z;
int j=1;
for(i=1;i<=5;i++)
{
 printf(" Enter %d number :",i);
 scanf("%d",&z);
 j+=z;
}
float a=j/5.0;
printf("the average of  entered value is %f",a);
}
