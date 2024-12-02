 #include <stdio.h>


struct INCOME
{
int basic_salary ;
int dearness ;
int Home;
int EPF ;
} ;


int main() {
int a,b,c,d;
printf ("enter the basic salary");
scanf("%d",&a);
b = 0.2*a;
c = (1.5)*a;
d =(0.1)*a;



struct INCOME obj = {a,b,c,d};
printf ("the person's total salary is%d \n", a+b+c+d ) ; 
printf(" the person's dearness is %d\n", obj.dearness);
printf(" the person's home is%d\n ",obj.Home);
printf(" the person's epf is%d\n",obj.EPF);
printf(" the person's basic salary is%d\n " , obj.basic_salary);

return 0;
}












