#include <stdio.h>

char *getWeekName(int);
char *getMonthName(int);


int main(){
    int week = 1;
    int month = 2;
    char *weeks = getWeekName(week);
    char *months = getMonthName(month);
    printf("week = %s\n", weeks);
    printf("month = %s\n", months);
    return 0;
}



char *getWeekName(int week){
    switch (week){
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesay";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
    }
    return "";

}


char *getMonthName(int month){
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "Setempber", "October", "November", "December"};
    if (month >= 1 && month <=12){
        return months[month - 1];
    }
    return "";
}
