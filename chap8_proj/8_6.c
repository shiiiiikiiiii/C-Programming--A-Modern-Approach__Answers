#include <stdio.h>
#include <ctype.h>

int main(){
    char message[100];
    printf("enter message: ");
    scanf("%[^\n]", message);

    for(int i = 0; i < sizeof(message) / sizeof(message[0]); i++){
        message[i] = toupper(message[i]);
        switch (message[i]){
        case 'A':
            message[i] = '4';
            break;
        case 'B':
            message[i] = '8';
            break;
        case 'E':
            message[i] = '3';
            break;
        case 'I':
            message[i] = '1';
            break;
        case '0':
            message[i] = 'O';
            break;
        case 'S':
            message[i] = '5';
            break;
        
        default:
            break;
        }
    }

    printf("in BIFF-speak: %s!!!!!!!!!!!!!!!!!!!!!!", message);
}