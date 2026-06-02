#include <stdio.h>

int main(void){

    int x,s=1;
    printf("Try to guess a number: ");   
    scanf("%d",&x);
    while(x!=10){
        printf("Unlucky. Wrong number. Try again: ");
        scanf("%d",&x);
        s+=1;
    }
    if(s==1){
        printf("You are incredible. First try. How did you do that? Can you read minds?");
    }
    else if(s>1 && s<10){
        printf("Not bad, but you could have done better.");
    }
    else{
        printf("After so many tries it was easy to guess, so nothing to congratulate you on.");
    }

}