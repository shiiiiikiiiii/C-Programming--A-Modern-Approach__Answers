int day_of_year(int month,int day,int year){
    int days = 0;

    for(int i = 1; i < month; i++){
        switch (i){
        case 1:
            days += 31;
            break;
        case 2:
            if(!((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)){
                days += 28;
            }
            else{
                days += 29;
            }
            break;
        case 3:
            days += 31;
            break;
        case 4:
            days += 30;
            break;
        case 5:
            days += 31;
            break;
        case 6:
            days += 30;
            break;
        case 7:
            days += 31;
            break;
        case 8:
            days += 31;
            break;
        case 9:
            days += 30;
            break;
        case 10:
            days += 31;
            break;
        case 11:
            days += 30;
            break;
        case 12:
            days += 31;
            break;
        
        default:
            break;
        }
    }

    return (days + day);
}