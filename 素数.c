#include <stdio.h>
#include <math.h>
int main()
{
    // ͳ�Ƹ���
    int count = 0;
    int i = 0;
    for (i = 101; i <= 200; i++)
    {
        // �ж�i�Ƿ�������
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
    printf("�����ĸ�����%d\n", count);
    return 0;
}