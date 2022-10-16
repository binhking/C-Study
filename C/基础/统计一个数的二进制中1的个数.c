#include <stdio.h>

int count_bit_one1(unsigned int n)
{
    // 这个对无符号整数可以 如果是-1 就统计不出来
    // 这样需要将形参数据类型  修改成unsigned
    int count = 0;
    while (n)
    {
        if (n % 2 == 1)
        {
            count++;
        };
        n = n / 2;
    }
    return count;
}

int count_bit_one2(int n)
{
    /*
    3   &
    0011 n
    0010 n-1

    0010 n
    0001 n-1

    0000 n
    */
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{

    int n = 0;
    scanf_s("%d", &n);
    printf("%d", count_bit_one2(n));
    return 0;
}