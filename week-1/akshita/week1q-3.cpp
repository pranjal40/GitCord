#include<stdio.h>
int main(){
	float r,a;
	printf("enter the radius : ");
	scanf("%f",&r);
	
	a=4/3*22/7*r*r*r;
	printf("the volume of sphere is: %f",a);
	
	return 0;
}