int gcd(int m,int n){
    if(n == 0){
        return m;
    }

    gcd(n, (m % n));
}