#include<stdio.h>
float calculator(float p,float r,int q)
{float f=(p+(p*r))*q;
return f;
}
int main()
{
printf(" g for groceries ,f for furniture, c for cosmetics,a for clothing \n");
char n;
int q;
float p;
#
printf("enter the category: ");
scanf("%s",&n);
printf("enter the quantity: ");
scanf("%d",&q);
printf("enter the basic price: ");
scanf("%f",&p);
float r,final_amount;
if (n=='g'){
r=0.02;
final_amount=calculator(p,r,q);
}
else if(n=='f'){
r=0.08;
final_amount=calculator(p,r,q);
}
else if (n=='c'){
r=0.05;
final_amount=calculator(p,r,q);
}
else if(n=='a'){
r=0.1;
final_amount=calculator(p,r,q);
}
else
{ printf("invalid input");}
printf("the final price for given item:%f",final_amount);

return 0;
}
