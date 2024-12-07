#include<stdio.h>
int leapyear(int year){
if(year % 4 == 0 && year % 100!=0 || year % 400 ==0){
return 1;}
else
{
return 0;
}
return 0;}

int main(){
int year,n;
printf("enter day  of the year(1-365/366): ");
scanf("%d",&n);
printf("enter the year: ");
scanf("%d",&year);
int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
if(leapyear(year)){
monthdays[1]=29;
}
int month =0;
while(n>monthdays[month]){
n=n-monthdays[month];
month++;}
char *monthname[]={"january","february","march","april","may","june","july","august","september","october","november","december"};

printf("%d th day of  %s month of %d year",n,monthname[month],year);
return 0;}













