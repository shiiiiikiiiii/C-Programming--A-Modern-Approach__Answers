#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[100];
    int times[26] = {0}, zeros = 0;

    printf("enter first word: ");
    scanf("%s", word);
    for(int i = 0; i < strlen(word); i++){
        word[i] = toupper(word[i]);
        times[word[i] - 'A']++;
    }

    printf("enter second word: ");
    scanf("%s", word);
    for(int i = 0; i < strlen(word); i++){
        word[i] = toupper(word[i]);
        times[word[i] - 'A']--;
    }

    while (times[zeros] == 0){
        zeros++;
    }
    if(zeros == 26){
        printf("the words are anagrams");
    }
    else{
        printf("the words are not anagrams");
    }
    
}