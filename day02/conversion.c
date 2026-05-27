#include <stdio.h>
#include <math.h>

int main(void){

    float a,c;
    printf("Enter speed in km/h: ");
    scanf("%f",&a);
    c=a/3.6;
    printf("%.3f km/h is: %.3f m/s",a,c);
}