int* find_largest(int a[], int n){
    int* ptr = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] >= *ptr){
            *ptr = &a[i];
        }
    }
    return ptr;
}