#include <stdio.h>

int main()
{
    // 辗转法
    int m = 0;
    int n = 0;
    int r = 0;
    scanf_s("%d%d", &m, &n);
<<<<<<< HEAD
    // 你好 我们相遇了
    == == == =
                 // 你好 测试
>>>>>>> 59f5e6c1f8c3ae435caece17e830f2ef105339fb
        while (r = m % n)
    {
        m = n;
        n = r;
    }
    printf("最大公约数：%d\n", n);
    return 0;
}
