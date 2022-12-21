int q_a(int a[], int n){
    int largest = -999999;
    
    for(int i = 0; i < n; i++){
        if(a[i] >= largest){
            largest = a[i];
        }
    }

    return largest;
}

int q_b(int a[], int n){
    double average, nn = n;

    for(int i = 0; i < n; i++){
        average += a[i] / nn;
    }

    return average;
}

int q_c(int a[], int n){
    int positive = 0;

    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            positive++;
        }
    }

    return positive;
}