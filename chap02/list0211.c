#include <stdio.h>

int main(void)
{
    int a, b, c;
    puts("三つの整数を入力してください。");
    printf("整数a: ");
    scanf("%d", &a);
    printf("整数b: ");
    scanf("%d", &b);
    printf("整数c: ");
    scanf("%d", &c);

    int sum = a + b + c;    // 合計
    double avg = sum / 3.0; // 平均値
    printf("合計は%5dです。\n", sum);
    printf("平均値は%5.1fです。\n", avg);

    return 0;
}