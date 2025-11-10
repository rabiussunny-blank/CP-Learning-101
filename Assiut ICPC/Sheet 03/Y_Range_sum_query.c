#include <stdio.h>

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);

    long long A[N + 1];
    long long prefix[N + 1];
    prefix[0] = 0;

    for (int i = 1; i <= N; i++) {
        scanf("%lld", &A[i]);
        prefix[i] = prefix[i - 1] + A[i]; 
    }

    while (Q--) {
        int L, R;
        scanf("%d %d", &L, &R);
        printf("%lld\n", prefix[R] - prefix[L - 1]);
    }

    return 0;
}
