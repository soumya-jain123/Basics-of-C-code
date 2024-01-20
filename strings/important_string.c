#include<stdio.h>
#include<string.h>

int main() {
    // Declare and initialize two strings
    char str1[] = "AmulyaJain";
    char str2[] = "SoumyaJain";

    // Declare two additional strings to store intermediate and final results
    char str3[20];

    // Copy the content of str1 to str3 using strcpy
    strcpy(str3, str1);
    

    // Concatenate str2 to the end of str1 using strcat
    strcat(str1, str2);
    
    // Copy the final concatenated string to str4 using strcpy
    

    // Print the results
    printf("\n %s\t%s\t%s", str3, str2, str1);

    return 0;
}
