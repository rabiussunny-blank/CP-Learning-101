#include <stdio.h>

int main() {
    char s[1000005];
    scanf("%[^\n]", s);   // read entire line until newline

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\\') break;  // stop if '\' found
        printf("%c", s[i]);
    }

    return 0;
}
