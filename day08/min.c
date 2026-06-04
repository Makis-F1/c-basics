    #include <stdio.h>
    #define MAX 100

    int main(void){
        int n;
        double x[MAX],min;
        printf("Enter the size of the array you want to use: ");
        scanf("%d",&n);
        while(n<=0 || n>MAX){
            printf("The array is not the right size. Please enter the right size: ");
            scanf("%d", &n);
        }
        printf("Enter the numbers within your array: ");
        for(int i=0; i<n; i++){
            scanf("%lf",&x[i]);
            if(i==0){
                min=x[i];
            }
            if(min>x[i]){
                min=x[i];
            }
        }
        printf("The lowest number in this array is: %.2lf\n", min);
        return 0;
    }