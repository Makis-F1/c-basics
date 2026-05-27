#include <stdio.h>

int main(void){
    
    float x;
    printf("Enter number to convert from km to m:");
    scanf("%f",&x);
    printf("That numbers value in meters is: %.2f",x*1000);
}