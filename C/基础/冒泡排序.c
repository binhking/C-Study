#include <stdio.h>

void bubble_sort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int flag = 1;
        int j = 0;
        for (j = 0; j < size - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
}

int main()
{

    int arr[] = {1, 5, 3, 6, 9, 8, 4, 7, 10};

    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);

    int i = 0;
    for (i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}