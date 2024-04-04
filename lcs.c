#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char a[100], b[100];
    printf("Enter string 1:");
    fgets(a, sizeof(a), stdin);
    printf("Enter string 2:");
    fgets(b, sizeof(b), stdin);

    int table[101][101] = {0}; 
    int len_a = strlen(a) - 1;
    int len_b = strlen(b) - 1;

    for (int i = 1; i <= len_a; i++) {
        for (int j = 1; j <= len_b; j++) {
            if (a[i - 1] == b[j - 1]) {
                table[i][j] = table[i - 1][j - 1] + 1;
            } else {
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
            }
        }
    }

    printf("Length of Longest Common Subsequence: %d\n", table[len_a][len_b]);
    return 0;
}
