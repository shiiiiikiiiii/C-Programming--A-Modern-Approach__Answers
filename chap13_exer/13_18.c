#include <string.h>

void remove_filename(char* url){
    url += strlen(url);
    while(*url != '/'){
        url--;
    }
    *url = '\0';
}