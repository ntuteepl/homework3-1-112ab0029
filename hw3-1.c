#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool isPrime = true;

    printf("請輸入一個正整數：");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

