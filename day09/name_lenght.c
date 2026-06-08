#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void){
    char word1[MAX];
    char word2[MAX];
    int x;

    printf("Enter a word: ");
    scanf("%s",word1);
    printf("Enter another word: ");
    scanf("%s",word2);

    x=strcmp(word1,word2);
    if(x==0){
        printf("These words are the same.");
    }else{
        printf("These words have %d different characters.",x);
    }

}
    
