#include <stdio.h>

int main() {
    int N;
    
    // Read the integer input
    scanf("%d", &N);
    
    // Check even or odd
    if (N % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    
    return 0;
}