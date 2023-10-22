#include <stdio.h>

typedef struct {
    int start;
    int end;
} Order;

int compare(const void *a, const void *b) {
    return ((Order *)a)->start - ((Order *)b)->start;
}

int main() {
    Order orders[3];
    int numVehicles = 0;

    for (int i = 0; i < 3; i++) {
        printf("輸入第 %d 筆訂單的出發時間和返回時間（範例：8 16）：", i + 1);
        scanf("%d %d", &orders[i].start, &orders[i].end);
    }

    qsort(orders, 3, sizeof(Order), compare);

    for (int i = 0; i < 3; i++) {
        if (orders[i].start >= numVehicles) {
            numVehicles++;
        }
    }

    printf("至少需要 %d 輛遊覽車才足以應付需求。\n", numVehicles);

    return 0;
}
