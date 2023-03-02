#include <stdbool.h>
#include <string.h>

bool test_extension(const char* file_name, const char* extension){
    file_name += strlen(file_name) - strlen(extension);
    while(*extension != '\0'){
        if(toupper(*++file_name) != toupper(*++extension)){
            return false;
        }
    }
    return true;
}