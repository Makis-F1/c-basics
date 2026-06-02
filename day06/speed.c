#include <stdio.h>

int main(void){

    int i=1,n,x=0;
    float s,a;
    printf("Enter the number of measurements you want to input: ");
    scanf("%d", &n);
    while(n<=1){
        printf("Not enough measurements. Please enter a different number: ");
        scanf("%d",&n);
    }
    printf("Enter measurement 1: ");
    scanf("%f",&a);
    s=0;
    do{     
        scanf("%f",&s);
        if(s<a){
            x+=1;
        }
        a=s;
        i+=1;
    }while(i<n);
    printf("Speed has decreased %d times.\n",x);
}