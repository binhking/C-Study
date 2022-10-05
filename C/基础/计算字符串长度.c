#include <stdio.h>

int str_len(char *str)
{

    if (*str != '\0')

        return 1 + str_len(str + 1);

    else
        return 0;
}

int main()
{
    char arr[] = "bit";
    int len = str_len(arr);
    printf("%s 字符长度：%d\n", arr, len);
    return 0;
}