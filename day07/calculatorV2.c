#include <stdio.h>

double add(double x, double y){
    return x+y;
}

double subtract(double x, double y){
    return x-y;
}

double multiply(double x, double y){
    return x*y;
}

double divide(double x, double y){
    return x/y;
}

int main(void){
    char j;
    double x,y,r;
    do{
    printf("What operation do you want(+, -, *, /, E(Exit): ");
    scanf(" %c", &j);
    if(j=='E' || j=='e'){
        return 0;
    }
    printf("Enter numbers: ");
    scanf(" %lf %lf", &x, &y);

    switch(j){
        case '+': 
                r=add(x,y);
                printf("%.2lf\n",r);
                break;
        case '-':
                r=subtract(x,y); 
                printf("%.2lf \n", r);
                break;
        case '*': 
                r=multiply(x,y);
                printf("%.2lf \n",r);
                break;
        case '/':
                if(y==0){
                        printf("You can not divide with a zero \n");
                        }else{
                r=divide(x,y); 
                printf("%.2lf\n",r);}
                break;
        default: 
                printf("Invalid operation \n");
                break;
    }
}while(1);
return 0;
}