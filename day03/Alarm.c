#include <stdio.h>
#include <math.h>

int main(void){

    float t,limit;
    limit=100;
    printf("Enter a temperature: ");
    scanf("%f",&t);

    if(t>limit){
        printf("Alarm");
    }
}