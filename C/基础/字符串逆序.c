#include <stdio.h>

int strlens(char *str)
{
    //统计字符串的长度
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

void reverse_string(char arr[])
{
    int left = 0;
    int right = strlens(arr) - 1;

    while (left < right)
    {
        arr[right] = arr[right] + arr[left];
        arr[left] = arr[right] - arr[left];
        arr[right] = arr[right] - arr[left];
        left++;
        right--;
    }
}

void reverse_string_recursive(char arr[])
{
    char temp = arr[0];
    int len = strlens(arr);
    arr[0] = arr[len - 1];
    arr[len - 1] = '\0';
    if (strlens(arr + 1) >= 2)
        reverse_string_recursive(arr + 1);
    arr[len - 1] = temp;
}

int main()
{

    char str[] = "asdfghj";
    // reverse_string(str);
    reverse_string_recursive(str);
    printf("%s", str);
    return 0;
}