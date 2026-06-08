#include <stdio.h>
#include <string.h>
#define MAX 20

int main(void){
    char word[MAX];
    int x=0;
    printf("Enter a word: ");
    scanf("%s",word);
    
    for(int i=0;i<strlen(word);i++){
        strlwr(word);
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
            x+=1;
        }
    }
    printf("This word has %d vowels.",x);
}

