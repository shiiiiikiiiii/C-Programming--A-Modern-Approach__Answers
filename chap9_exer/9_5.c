int num_digits(int n){
    int i = 0;

    while(n != 0){
        i++;
        n /= 10;
    }

    return i;
}