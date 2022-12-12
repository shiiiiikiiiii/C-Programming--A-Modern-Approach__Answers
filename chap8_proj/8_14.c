#include <stdio.h>
#include <string.h>

int main(){
    char sentence[100], tmp, mark;
    int wordBegin, wordEnd, lenth;
    printf("enter a sentence: ");
    scanf("%[^\n]", sentence);
    printf("reversal of sentence: ");

    lenth = strlen(sentence);
    wordEnd = lenth - 2;
    mark = sentence[lenth - 1];
    for(int i = lenth - 2; i >= 0; i--){
        if(sentence[i] == ' '){
            wordBegin = i + 1;
            for(int j = wordBegin; j <= wordEnd; j++){
                printf("%c", sentence[j]);
            }
            printf(" ");
            wordEnd = i - 1;
        }
    }
    for(int i = 0; i <= wordEnd; i++){
        printf("%c", sentence[i]);
    }
    printf("%c", mark);
}