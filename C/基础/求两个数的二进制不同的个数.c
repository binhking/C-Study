#include <stdio.h>

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

int get_different_bit(int n, int m)
{
    int diff = m ^ n; //异或 两个二进制不同的为一 所以得到结果二进制为 一的就是不同的  然后在统计二进制中1个数
    return count_bit_one2(diff);
}
int main()
{

    int n = 0;
    int m = 0;
    scanf_s("%d%d", &n, &m);
    printf("%d", get_different_bit(n, m));
    return 0;
}