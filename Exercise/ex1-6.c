#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    printf("入力された整数は%dです。\n", no);
    printf("%dから7を減じた値は%dです。\n", no, no - 7);

    return 0;
}