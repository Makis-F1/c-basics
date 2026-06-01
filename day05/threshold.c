#include <stdio.h>

int main(void){
    int n,t,i,b,s=0;
    printf("Insert the amount of numbers you want to insert: ");
    scanf("%d",&n);
    printf("insert their threshold: ");
    scanf("%d",&t);
    for(i=0;i<n;i++){
        scanf("%d",&b);
        if(b>t){
            s+=1;
        }
    }
    printf("The amount of numbers above the threshold is: %d",s);
}