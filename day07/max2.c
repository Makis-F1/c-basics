#include <stdio.h>

int max2(int a, int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }

}

int main(void){
    int a,b,r;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    r=max2(a,b);
    printf("The higher number is: %d\n",r);

    return 0;
}
 