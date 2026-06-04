#include <stdio.h>

float average3(float a,float b,float c);

int main(void){
    float a,b,c;
    float r;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    r=average3(a,b,c);
    printf("Their average is: %.2f",r);

    return 0;
}

float average3(float a,float b,float c){
    float x;
    x=(a+b+c)/3;
    return x;
}