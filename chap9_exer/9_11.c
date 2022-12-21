float compute_GPA(char grades[], int n){
    float sum = 0;

    for(int i = 0; i < n; i++){
        switch (grades[i]){
        case 'A':
            sum += 4;
            break;
        case 'B':
            sum += 3;
            break;
        case 'C':
            sum += 2;
            break;
        case 'D':
            sum += 1;
            break;
        
        default:
            break;
        }
    }

    return (sum / n);
}