#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(){
    
    int counts1[26] = {0}, counts2[26] = {0}, zeros = 0;

    printf("enter first word: ");
    read_word(counts1);
    printf("enter second word: ");
    read_word(counts2);

    if(equal_array(counts1, counts2)){
        printf("the words are anagrams");
    }
    else{
        printf("the words are not anagrams");
    }
    
}

void read_word(int counts[26]){
    char word[100];
    scanf("%s", word);
    for(int i = 0; i < strlen(word); i++){
        word[i] = toupper(word[i]);
        counts[word[i] - 'A']++;
    }
}

bool equal_array(int counts1[26], int counts2[26]){
    int count = 0;

    for(int i = 0; i < 26; i++){
        if(counts1[i] == counts2[i]){
            count++;
        }
    }

    return (count == 26);
}