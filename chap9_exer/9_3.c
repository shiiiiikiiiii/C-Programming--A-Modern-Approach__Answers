int gcd(int m,int n){
    int remainder = 0;

    while(n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}