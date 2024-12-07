#include<stdio.h>

int main(){
int rad;
printf("enter the radius of the sphere\n");
scanf("%d",&rad);
float vol=(4*3.14*rad*rad*rad)/3;
printf("the volume of sphere is %.2f\n",vol);
return 0;
}
