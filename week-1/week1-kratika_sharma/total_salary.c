#include <stdio.h>
 
int main(){
char Name[50];
float basic;
printf("enter the name of the employe\n");
scanf("%s",&Name);
printf("enter the Basic salary of employe");
scanf("%f",&basic);
float a=0.2*basic, b=0.15*basic,c=0.1*basic;
//a= dearness allowance,b= epf, c= home allowance//
float total=a+b+c+basic;
printf("the name of the employe is %s\n",Name);
printf("the Total salary of the employe is %.2f\n",total);
return 0;
}













