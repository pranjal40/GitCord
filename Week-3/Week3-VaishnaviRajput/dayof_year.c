#include<stdio.h>
//program to take date input and tell the day of year

int leapyear(int year){
 if((year%4==0 && year%100!=0) || (year%400==0))//funtion check if year is leap year or not
   { return 1;}
 else
   { return 0;}
return 0;
  }

void main()
{
 int date,month,year;
 printf("Enter the date(DD/MM/YYYY format):");
 scanf("%d/%d/%d",&date,&month,&year);//to get input in above format

 int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
 if(leapyear(year)){
  monthdays[1]=29;//to make change for leap year
  }

 int i=0;
 int day=0;
int n=month-1;
 while(i<=n){ //condition check to add days of each month correctly
 if(date<monthdays[i] &&  n==i){//condition add only upto mention date of  given month
  day+=date;
  break;}
 day+=monthdays[i];
 i++;
 }
printf("The date  %d/%d/%d  is the %d th  day  of the year.",date,month,year,day);//output
 

}
