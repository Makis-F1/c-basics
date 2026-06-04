#include <stdio.h>

float kmh_to_ms(float s);

int main(void){
    float s,c;
    printf("Enter speed in km/h: ");
    scanf("%f",&s);
    c=kmh_to_ms(s);
    printf("Speed in m/s is: %.2f\n",c);

    return 0;

}

float kmh_to_ms(float s){
    return s/3.6;
}