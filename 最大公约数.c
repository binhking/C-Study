#include <stdio.h>

int main()
{
    // 辗转法
    int m = 0;
    int n = 0;
    int r = 0;
    scanf_s("%d%d", &m, &n);
    // 你好 我们相遇了
    while (r = m % n)
    {
        m = n;
        n = r;
    }
    printf("最大公约数：%d\n", n);
    return 0;
}