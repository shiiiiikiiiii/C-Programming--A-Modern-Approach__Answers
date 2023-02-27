#define LEN 100

// n = ROW * COL
int sum_two_dimensional_array(const int* a, int n){
    int sum = 0;
    const int* p;

    for(p = a; p < a + n; p++){
        sum += *p;
    }

    return sum;
}