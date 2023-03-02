void censor(char* source){
    while(*(source+ 2) != '\0'){
        if(*source == 'f' && *(source + 1) == 'o' && *(source + 2) == 'o'){
            *source = 'x';
            *(source + 1) = 'x';
            *(source + 2) = 'x';
            source += 3;
        }
        else{
            source++;
        }
    }
}