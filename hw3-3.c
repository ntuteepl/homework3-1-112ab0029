#include <stdio.h>
#include <stdlib.h>

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int compare(const void *a, const void *b) {
    int sum_a = digitSum(*(int *)a);
    int sum_b = digitSum(*(int *)b);
    if (sum_a != sum_b) {
        return sum_a - sum_b;
    } else {
        return *(int *)a - *(int *)b;
    }
}

int main() {
    int N;
    printf("請輸入整數的個數 N：");
    scanf("%d", &N);

    int numbers[N];

    for (int i = 0; i < N; i++) {
        printf("請輸入第 %d 個整數：", i + 1);
        scanf("%d", &numbers[i]);
    }

    qsort(numbers, N, sizeof(int), compare);

    printf("排序後的結果：\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("最小數值：%d\n", numbers[0]);

    return 0;
}
