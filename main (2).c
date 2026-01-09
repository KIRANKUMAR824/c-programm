#include <stdio.h>

int main() {
    int age;
    
    // Read age
    scanf("%d", &age);
    
    // Check eligibility
    if (age >= 18)
        printf("Eligible");
    else
        printf("Not Eligible");
        
    return 0;
}