#include<stdio.h>

//program to accept basic salary and name of an employee
//output as total salary ,dearness allowance,EPF, home allowance 
//DA 20%,EPF15%,HA 10%

void  main()
{
int BS;
char name[50];

printf("Enter name of the Employee :");
scanf("%s",&name);
printf("Enter the basic  salary of the employee:");
scanf("%d",&BS);

float  DA,EPF,HA,TS; 
//DA=dearness allowance;EPF=employee provident fund;HA=home allowance;TS=total salary;
DA=0.2*BS;
HA=0.1*BS;
EPF=0.15*BS;
TS=BS+DA+HA-EPF;

printf("for empolyee %s: \n",name);
printf("Total Salary= %f   \n",TS);
printf(" Dearness allowance=%f  \n",DA);
printf("Home allowance= %f \n ",HA);
printf(" Basic Salary=  %f \n",BS);
printf("Employee Provident Fund= %f  \n ",EPF);

}
