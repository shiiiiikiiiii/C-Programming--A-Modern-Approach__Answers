#include <stdio.h>
#include <string.h>

int main(){
    char word[20], smallest_word[20], largest_word[20];

    printf("enter word: ");
    scanf("%s", word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);

    while(1){
        printf("enter word: ");
        scanf("%s", word);
        if(strcmp(smallest_word, word) > 0){
            strcpy(smallest_word, word);
        }
        if(strcmp(largest_word, word) < 0){
            strcpy(largest_word, word);
        }
        if(strlen(word) == 4){
            break;
        }
    }

    printf("\nsmallest word: %s\n", smallest_word);
    printf("largest word: %s", largest_word);
}