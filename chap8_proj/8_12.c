#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[100];
    int sum = 0, value[] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 
    };
    printf("enter a word: ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++){
        word[i] = toupper(word[i]);
        sum += value[word[i] - 'A'];
    }

    printf("scrabble value: %d", sum);
}