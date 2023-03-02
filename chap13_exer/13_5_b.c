#include <ctype.h>

void capitalize(char* source){
    for(; *source != '\0'; source++){
        if(*source >= 'a' && *source <= 'z'){
            *source = toupper(*source);
        }
    }
}