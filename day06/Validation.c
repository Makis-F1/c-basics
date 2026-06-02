#include <stdio.h>

int main(void){

    int n;
    printf("Enter number 10: ");
    scanf("%d",&n);

    while(n!=10){
        printf("Your input is incorrect. Please try again: ");
        scanf("%d",&n);
    }
    printf("Your input is correct!");
}