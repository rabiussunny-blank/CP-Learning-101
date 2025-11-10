#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int count[M + 1]; // 1 থেকে M পর্যন্ত ব্যবহার করবো
    for (int i = 1; i <= M; i++)
        count[i] = 0;

    // প্রতিটি সংখ্যার frequency গোনা
    for (int i = 0; i < N; i++) {
        count[A[i]]++;
    }

    // ফলাফল প্রিন্ট করা
    for (int i = 1; i <= M; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
