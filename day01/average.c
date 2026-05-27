#include <stdio.h>
#include <math.h>

int main(void){

float x,y,z,a;
printf("Enter three numbers:");
scanf("%f %f %f",&x,&y,&z);
a=(x+y+z)/3;
printf("Their average is: %.2f",a);
}