#include <stdio.h>

int main()
{
    int key = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int left_index = 0;
    int right_index = size - 1;

    while (left_index <= right_index)
    {
        int mid = (left_index + right_index) / 2;
        if (arr[mid] > key)
        {
            right_index = mid - 1;
        }
        else if (arr[mid] < key)
        {
            left_index = mid + 1;
        }
        else
        {
            printf("找到了 下标是：%d\n", mid);
            break;
        }
    }
    if (left_index > right_index)
    {
        printf("没有找到\n");
    }

    return 0;
}