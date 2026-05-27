#include <stdio.h>
#include <math.h>

int main(void){

    float s,t,v;
    printf("Enter distance in km travelled and time in hours it took: ");
    scanf("%f %f",&s,&t);
    v=s/t;
    printf("Average speed that took to travel distance of %.2f km is: %.2f km/h",s,v);

}