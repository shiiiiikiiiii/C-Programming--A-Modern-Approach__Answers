#include <stdio.h>
#include <string.h>

int main(){
    char message[100];
    int shift;
    printf("enter message to be encrypted: ");
    scanf("%[^\n]", message);
    printf("enter shift amount(1-25): ");
    scanf("%d", &shift);

    for(int i = 0; i < strlen(message); i++){
        if(message[i] >= 'A' && message[i] <= 'Z'){
            message[i] = ((message[i] - 'A') + shift) %26 + 'A';
        }
        if(message[i] >= 'a' && message[i] <= 'z'){
            message[i] = ((message[i] - 'a') + shift) %26 + 'a';
        }
    }

    printf("encrypted message: ");
    for(int i = 0; i < strlen(message); i++){
        printf("%c", message[i]);
    }
}