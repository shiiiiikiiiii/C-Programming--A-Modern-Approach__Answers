void find_two_largest(const int* a, int n, int* largest, int* second_largest){
    *largest = *a;
    *second_largest = *a;
    a++;

    for(int i = 1; i < n; i++){
        if(*a >= *largest){
            *second_largest = *largest;
            *largest = *a;
        }
        a++;
    }
}