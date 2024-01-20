#include <stdio.h>

// Define a simple boolean type
typedef int bool;
#define true 1
#define false 0

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    printf("Prime numbers from 1 to 300 are:\n");

    for (int i = 1; i <= 300; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
