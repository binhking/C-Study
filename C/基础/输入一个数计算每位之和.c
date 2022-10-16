#include <stdio.h>

int digitSum(unsigned int num)
{
    if (num > 9)
        return digitSum(num / 10) + num % 10;
    else
        return num;
}

int main()
{

    unsigned int num = 0;
    scanf_s("%d", &num);

    printf("%d", digitSum(num));
    return 0;
}