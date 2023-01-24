#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    int currentDate = timeinfo->tm_mday;
    int currentMonth = timeinfo->tm_mon + 1;
    int currentYear = timeinfo->tm_year + 1900;
    
    int dateV, monthV, yearV;
    scanf("%d.%d.%d", &dateV, &monthV, &yearV);
    int yearDifference = currentYear - yearV;
    if (currentMonth < monthV) {
        yearDifference -= 1;
    } else {
        if (currentDate < dateV) {
            yearDifference -= 1;
        }
    }

    printf("Now: %d\n", yearDifference);
    printf("After 10 years: %d", yearDifference + 10);
    return 0;
}