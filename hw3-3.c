#include <stdio.h>

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num1, num2;
    printf("請輸入兩個整數，用空格隔開：\n");
    scanf("%d %d", &num1, &num2);

    int sum1 = digitSum(num1);
    int sum2 = digitSum(num2);

    if (sum1 < sum2 || (sum1 == sum2 && num1 < num2)) {
        printf("計算後的最小整數是：%d\n", num1);
    } else {
        printf("計算後的最小整數是：%d\n", num2);
    }

    return 0;
}
