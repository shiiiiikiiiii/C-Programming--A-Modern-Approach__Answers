#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[100];
    int sum = 0;
    printf("enter phone number: ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++){
        switch (toupper(word[i]))
        {
        case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
            sum += 1;
            break;
        case 'D': case 'G':
            sum += 2;
            break;
        case 'B': case 'C': case 'M': case 'P':
            sum += 3;
            break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            sum += 4;
            break;
        case 'K':        
            sum += 5;
            break;
        case 'J': case 'X':
            sum += 8;
            break;
        case 'Q': case 'Z':
            sum += 10;
        default:
            break;
        }
    }

    printf("scrabble value: %d", sum);
}