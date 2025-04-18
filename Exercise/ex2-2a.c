#include <stdio.h>

int main(void)
{
    int n1;

    puts("2つの整数を入力してください。");
    printf("整数n1:");
    scanf("%d", &n1);

    printf("下二桁の値は%dで、その上位桁は%dです。\n", n1 % 100, n1 / 100);

    return 0;
}