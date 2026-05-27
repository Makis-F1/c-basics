#include <stdio.h>
#include <math.h>

int main(void){

    float r,P,A;
    
    printf("Write the raidius of the circle:");
    scanf("%f",&r);
    P=2*3.14*r;
    A=pow(r,2)*3.14;
    printf("P=%.2f\nA=%.2f",P,A);
}