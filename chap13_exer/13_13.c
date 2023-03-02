#include <string.h>

void build_index_url(const char* domain, char* index_url){
    index_url = strcat((strcat("heep://www.", domain)), "/index.html");
}