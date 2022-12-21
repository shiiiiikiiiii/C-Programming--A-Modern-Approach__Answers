int digit(int n, int k){
    int tmp;

    while(k > 0){
        tmp = n % 10;
        n /= 10;
        k--;
    }

    return tmp;
}