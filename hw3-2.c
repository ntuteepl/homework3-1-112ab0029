#include <stdio.h>

int main() {
    int s1, s2, s3, d1, d2, d3;
    printf("請輸入三筆訂單的出發時間和返回時間（s1 d1 s2 d2 s3 d3）：\n");
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    int cars = 1;

    if (s2 < d1) {
        cars++;
    }

    if (s3 < d1) {
        cars++;
    }

    printf("至少需要 %d 輛遊覽車才足以應付需求。\n", cars);

    return 0;
}
