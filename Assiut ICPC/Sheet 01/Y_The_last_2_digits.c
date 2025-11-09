#include <stdio.h>

int main() {
    unsigned int A, B, C, D;
    scanf("%u %u %u %u", &A, &B, &C, &D);

    unsigned long long result = A;
    result = (result * B) % 100;
    result = (result * C) % 100;
    result = (result * D) % 100;

  
    printf("%02llu\n", result); 

    return 0;
}
