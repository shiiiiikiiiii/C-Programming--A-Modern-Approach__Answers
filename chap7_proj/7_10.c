#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char sentence[100];
    int sum = 0;
    printf("enter a sentence: ");
    scanf("%[^\n]", sentence);

    for(int i = 0; i < strlen(sentence); i++){
        char tmp = toupper(sentence[i]);
        if(tmp == 'A' || tmp == 'E' || tmp == 'I' || tmp == 'O' || tmp == 'U'){
            sum += 1;
        }
    }

    printf("your sentence contains %d vowels", sum);
}