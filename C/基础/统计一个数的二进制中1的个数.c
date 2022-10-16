#include <stdio.h>

int count_bit_one(int n)
{
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
    printf("%d", count_bit_one(n));
    return 0;
}