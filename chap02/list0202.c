#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください: ");
    scanf("%d", &no);

    printf("最下位桁は%dです。\n", no % 10);

    return 0;
}