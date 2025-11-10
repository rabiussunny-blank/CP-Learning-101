#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    char digits[N + 1];
    scanf("%s", digits);
    
    for (int i = 0; i < N; i++) {
        sum += digits[i] - '0';  // Convert character to integer
    }
    
    printf("%d\n", sum);
    return 0;
}