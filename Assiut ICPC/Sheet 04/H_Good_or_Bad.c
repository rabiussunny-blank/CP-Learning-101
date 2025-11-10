#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char S[100005];
        scanf("%s", S);
        int good = 0;
        for (int i = 0; S[i + 2] != '\0'; i++) {
            if ((S[i] == '0' && S[i + 1] == '1' && S[i + 2] == '0') ||
                (S[i] == '1' && S[i + 1] == '0' && S[i + 2] == '1')) {
                good++;
                break;
            }
        }
        if (good>0)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}
