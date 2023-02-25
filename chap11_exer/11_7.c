void split_date(int day_of_year, int year, int* month, int* day){
    int feb, i;
    if(((year % 4 == 0) && (year % 100 !=0)) || year%400==0){
        feb = 29;
    }
    else{
        feb = 28;
    }
    int days[12] = {31, feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(i = 0; day_of_year > days[i]; i++){
        day_of_year -= days[i];
    }

    *month = i + 1;
    *day = day_of_year;
}