#include<stdio.h>
struct MonthData{
    int month;
    char monthName[20];
    int daysInMonth;
};


int main(){
    struct MonthData monthlyData[12];
    const char *monthNames[]= {
        "January", "february", "march","april",
        "may","june","july","august",
        "september","october","november","December"
    } ;

    for(int i=0;i<12;i++)
    {
        monthlyData[i].month = i+1;
        snprintf(monthlyData[i].monthName, sizeof(monthlyData[i].monthName), "%s", monthNames[i]);
        monthlyData[i].daysInMonth = 31;
    }

    for(int i=0;i<12;i++){
        printf("Month: %d, Name: %s, Days: %d\n",
        monthlyData[i].month,
        monthlyData[i].monthName,
        monthlyData[i].daysInMonth);
    }

    return 0;
}