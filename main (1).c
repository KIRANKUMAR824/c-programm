#include <stdio.h>

int main() {
    int N;
    
    // Read the integer input
    scanf("%d", &N);
    
    // Check the number
    if (N > 0) {
        printf("Positive");
    } else if (N < 0) {
        printf("Negative");
    } else {
        printf("Zero");
    }
    
    return 0;
}