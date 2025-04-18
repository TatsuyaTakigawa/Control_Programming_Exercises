#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    printf("あなたは%dと入力しました。\n", no);
    printf("%dの5倍は%dです。\n", no, no * 5);

    return 0;
}