#include <stdio.h>
#include <string.h>

int main(){
    double average;
    int spaces = 0, chars = 0;
    char sentence[100];

    printf("enter a sentence: ");
    scanf("%[^\n]", sentence);
    chars = strlen(sentence);

    for(int i = 0; i < chars; i++){
        if(sentence[i] == ' '){
            spaces++;
        }
    }

    average = (double)(chars - spaces - 1) / (spaces + 1);

    printf("chars %d, spaces %d", chars, spaces);
    printf("average word lenth: %lf", average);
}