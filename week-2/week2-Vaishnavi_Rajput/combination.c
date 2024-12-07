#include<stdio.h>
//to give all the possible combination of given n & r
long fact(int n){
if(n==0){
return 1;}//function to calculate  factorial of any number
return n*fact(n-1);
}
long comb(int n,int r){
long C= fact(n)/(fact(r)*fact(n-r));//function to calculate combination of given condition
return C;
}


int main()
{
int n,r;
printf("the total  number of different possible arrangement  (n):");
scanf("%d",&n);
printf("number of desired outcomes(r):");
scanf("%d",&r);
long combination=comb(n,r);
printf("Total number of possible combinations for a particular case is: %ld ",combination);//output
return 0;
}
