#include <stdio.h>

// Define the structure for calendar events
struct CalendarEvent {
    char monthName[20];
    int dayOfMonth;
    char activities[200]; // Increased buffer size for activities
};

int main() {
    // Declare an array of 366 elements, each being a structure
    struct CalendarEvent calendar[366];

    // Initialize the array with data (this is just an example, replace with actual data)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayCounter = 1;

    for (int month = 0; month < 12; ++month) {
        for (int day = 1; day <= daysInMonth[month]; ++day) {
            snprintf(calendar[dayCounter].monthName, sizeof(calendar[dayCounter].monthName), "Month %d", month + 1);
            calendar[dayCounter].dayOfMonth = day;
            snprintf(calendar[dayCounter].activities, sizeof(calendar[dayCounter].activities), "No activities planned");
            dayCounter++;
        }
    }

    // Access and print the data (replace printf with actual usage)
    for (int i = 1; i <= 365; ++i) {
        printf("Day %d (%s): %s\n", calendar[i].dayOfMonth, calendar[i].monthName, calendar[i].activities);
    }

    return 0;
}
