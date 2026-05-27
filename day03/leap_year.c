#include <stdio.h>
#include <math.h>

int main(void){

    int g;
    printf("Enter a year:");
    scanf("%d",&g);
    if(g%100==0){
        if(g%400){
            printf("This is a leap year.");
        }
        else{
            printf("This is not a leap year.");
        }
    }
        if(g%4==0){
        printf("This is a leap year.");
    }else{
        printf("This is not a leap year");
    }
}