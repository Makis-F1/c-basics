#include <stdio.h>
#include <math.h>

int main(void){
    char j;
    float x,y;
    do{
    printf("What operation do you want(+, -, *, /, E(Exit): ");
    scanf(" %c", &j);
    if(j=='E' || j=='e'){
        return 0;
    }
    printf("Enter numbers: ");
    scanf(" %f %f", &x, &y);

    switch(j){
        case '+': printf("%.2f \n",x+y);break;
        case '-': printf("%.2f \n", x-y);break;
        case '*': printf("%.2f \n",x*y);break;
        case '/': if(y==0){printf("You can not divide with a zero \n");}else{printf("%f",x/y);}break;
        default: printf("Invalid operation \n");break;
    }
}while(1);

}