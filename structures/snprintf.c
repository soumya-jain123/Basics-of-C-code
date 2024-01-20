#include <stdio.h>

int main() {
    char buffer[20];
    int value = 42;

    // Using snprintf to format a string with a maximum of 19 characters
    int characters_written = snprintf(buffer, sizeof(buffer), "The value is %d", value);

    // Check if the formatted string was truncated
    if (characters_written >= sizeof(buffer)) {
        printf("String was truncated!\n");
    }

    // Print the formatted string
    printf("Formatted string: %s\n", buffer);

    return 0;
}




