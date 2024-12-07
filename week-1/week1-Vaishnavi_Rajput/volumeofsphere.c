#include<stdio.h>
//calculate the volume of sphere by taking radius from the user
void main()
{
 int r;
 float  vol;
 printf("Enter  the radius of sphere:");
 scanf("%d",&r);
 vol=(4.0/3.0)*3.141592*(r*r*r);
 printf("the volume of sphere for given radius is %f \n",vol); 
}



