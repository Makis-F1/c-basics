#include <stdio.h>
#include <math.h>

int main(void){

    int x,y,z,h=0;

    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>h){
        h=x;
    }
    if(y>h){
        h=y;
    }
    if(z>h){
        h=z;
    }

    printf("The highest number is: %d",h);
}