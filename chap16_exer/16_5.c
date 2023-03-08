struct date{
    int month;
    int day;
    int year;
};

int day_of_year(struct date d){
    // boring
}

int compare_dates(struct date d1, struct date d2){
    if(d1.year < d2.year){
        return -1;
    }
    else if(d1.year > d2.year){
        return 1;
    }

    if(d1.month < d2.month){
        return -1;
    }
    else if(d1.month > d2.month){
        return 1;
    }

    if(d1.day < d2.day){
        return -1;
    }
    else if(d1.day > d2.day){
        return 1;
    }

    return 0;
}