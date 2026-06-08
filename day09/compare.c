#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void){
    char word1[MAX];
    char word2[MAX];

    printf("Enter a word: ");
    scanf("%s",word1);
    printf("Enter another word: ");
    scanf("%s",word2);

    int x=strcmp(word1, word2);
    if(x==0){
        printf("These words are the same.");
    }else{
        printf("These words are different.");
    }
    return 0;
}
    
