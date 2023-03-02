#include <ctype.h>

void capitalize(char* source){
    for(int i = 0; source[i] != '\0'; i++){
        if(source[i] >= 'a' && source[i] <= 'z'){
            source[i] = toupper(source[i]);
        }
    }
}