#include <stdio.h>

int main(void)
{
    int num;

    printf("整数を入力してください: ");
    scanf("%d", &num);

    printf("%dの符号を反転した値は%dです。\n", num, -num);

    return 0;
}