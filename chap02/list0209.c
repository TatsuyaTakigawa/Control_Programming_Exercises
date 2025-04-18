#include <stdio.h>

int main(void)
{
    int a, b;

    puts("2つの整数を入力してください。");
    printf("整数a: "); // 整数aの入力を促す
    scanf("%d", &a);
    printf("整数b: "); // 整数bの入力を促す
    scanf("%d", &b);

    printf("それらの平均は%fです。\n", (a + b) / 2.0);

    return 0;
}