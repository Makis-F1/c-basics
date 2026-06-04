#include <stdio.h>
#define MAX 100

double average(int n, double x[]);

int main(void){
    double a,x[MAX];
    int n;

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
    printf("The average of this array is: %.2lf\n",a);
    return 0;

}

double average(int n, double x[]){
    double s=0;
    for(int i=0; i<n;i++){
        s += x[i];
    }
    return s/n;
}