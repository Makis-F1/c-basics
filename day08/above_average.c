#include <stdio.h>
#define MAX 100

double average(int n, double x[]);

int main(void){
    double a,x[MAX];
    int n,b=0;

    printf("Enter the size of array you want to use: ");
    scanf("%d",&n);
    while(n<=0 || n>MAX){
        printf("Wrong size of the array. Please enter new size: ");
        scanf("%d",&n);
    }
    printf("Enter the numbers within the array: ");
    for(int i=0; i<n;i++){
        scanf("%lf",&x[i]);
    }
  
    a=average(n,x);  
        for(int i=0; i<n;i++){
        if(x[i]>a){
            b+=1;
        }
    }
    if(b==0){
        printf("There are no numbers above average.");
    }else{
        printf("These numbers in the array are above average: \n");
        for(int i=0;i<n;i++){
            if(x[i]>a){
                printf("%.2lf\n",x[i]);
            }
        }
    }
    
    return 0;

}

double average(int n, double x[]){
    double s=0;
    for(int i=0; i<n;i++){
        s += x[i];
    }
    return s/n;
}   