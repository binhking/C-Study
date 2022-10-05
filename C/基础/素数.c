#include <stdio.h>
#include <math.h>
int main()
{
    // 统计个数
    int count = 0;
    int i = 0;
    for (i = 101; i <= 200; i++)
    {
        // 判断i是否是素数
        int j = 2;
        for (; j < sqrt(i); j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
        {
            count++;
            printf("%d\n", i);
        }
    }
    printf("素数的个数：%d\n", count);
    return 0;
}