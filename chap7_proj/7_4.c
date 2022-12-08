#include <stdio.h>
#include <string.h>

int main(){
    char phone[100];
    printf("enter phone number: ");
    scanf("%s", phone);

    for(int i = 0; i < strlen(phone); i++){
        switch (phone[i])
        {
        case 'A':
        case 'B':
        case 'C':
            phone[i] = '2';
            break;
        case 'D':
        case 'E':
        case 'F':
            phone[i] = '3';
            break;
        case 'G':
        case 'H':
        case 'I':
            phone[i] = '4';
            break;
        case 'J':
        case 'K':
        case 'L':
            phone[i] = '5';
            break;
        case 'M':
        case 'N':
        case 'O':
            phone[i] = '6';
            break;
        case 'P':
        case 'R':
        case 'S':
            phone[i] = '7';
            break;
        case 'T':
        case 'U':
        case 'V':
            phone[i] = '8';
            break;
        case 'W':
        case 'X':
        case 'Y':
            phone[i] = '9';
            break;
        default:
            break;
        }
    }

    printf("%s", phone);
}