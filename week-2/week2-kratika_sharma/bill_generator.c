#include<stdio.h>
int main(){
    float g, c, f, cl;
    float q1,q2,q3,q4;//q1=quantity of groceries; q2=quantity of cosmetics; q3= quantity of furniture; q4= quantity of clothing; //
    printf("enter the amount of groceries");
    scanf("%f",&g);
    printf("enter the amount of cosmetics");
    scanf("%f",&c);
    printf("enter the amount of furniter");
    scanf("%f",&f);
    printf("enter the amount of clothing");
    scanf("%f",&cl);
    printf("enter the quantity");
    scanf("%f",&q1);
     scanf("%f",&q2);
      scanf("%f",&q3);
       scanf("%f",&q4);
       float a,b,e,d;
    a=((g*0.02)+g)*q1;
    b=(c+(0.05*c))*q2;
    e=(f+(0.08*f))*q3;
    d=(cl+(0.1*cl))*q4;
  float ad ;
  ad=( a+b+e+d);
    printf(" %.2f \n",ad);
    return 0;}
