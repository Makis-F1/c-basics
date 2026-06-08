#include <stdio.h>
#include <string.h>

int main(void){

    char username[10];
    char password[20];

    char user[20]="Makis";
    char pass[10]="Formula1";

    printf("Username: ");
    scanf("%s",username);
    printf("Password: ");
    scanf("%s",password);

    int x= strcmp(username,user);
    int y= strcmp(password,pass);

    while(x!=0 || y!=0){
        printf("Your username or password is wrong please try again.\n");
        printf("Username: ");
        scanf("%s",username);
        printf("Password: ");
        scanf("%s",password);
        x= strcmp(username,user);
        y= strcmp(password,pass);
    }

    printf("Welcome back Makis!");

    return 0;
}