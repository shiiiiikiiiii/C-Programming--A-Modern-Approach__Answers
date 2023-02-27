double inner_product(const double* a, const double* b, int n){
    int product = 0;

    for(int i = 0; i < n; i++){
        product += *a * *b;
        a++;
        b++;
    }

    return product;
}