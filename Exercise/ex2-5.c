#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("2つの整数を入力してください。");
    printf("整数a: ");
    scanf("%d", &n1);
    printf("整数b: ");
    scanf("%d", &n2);

    printf("aはbの%f%%です。\n", (double)n1 / n2 * 100);

    return 0;
}
