#include<stdio.h>
#include<string.h>
 

 	
 	
int main(){
float a,b,c,d,z;
	char x[10];	
	printf("ENTER NAME :\n");
 	scanf("%s",x);
	
	 printf("enter  basic salary :\n");
	 scanf("%f",&a);
	  
	  b=(0.15)*a;
	  c=(0.1)*a;
	  d=(0.2)*a;
	  
	  z=b+c+d;
	  
	  printf("the person EPF: %f \n\n",b);
	  
	  
	   printf("the person home allowance: %f \n\n",c);
	   
	  
	  printf("the person Dearness: %f \n\n",d);
	    
	    printf("total salary: %f",z);
	  
	  
	
	 
	return 0;
}