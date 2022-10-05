#include <stdio.h>

int PalindromeAround(char *s, int l, int r, int length)
{

    while (l >= 0 && r <= length - 1)
    {
        if (s[l] != s[r])
            break;
        l--;
        r++;
    }
    return r - l - 1;
}

char *longestPalindrome(char *s)
{
    //中心扩散法
    int length = 0;
    int maxLength = 1;
    int begin = 0;
    int tempMAX = maxLength;
    while (*(s + length))
    {
        ++length;
    }
    if (length < 2)
        return s;

    for (int i = 0; i < length - 1; i++)
    {
        int oddLength = PalindromeAround(s, i, i, length);
        int evenLength = PalindromeAround(s, i, i + 1, length);
        if (oddLength > evenLength)
            tempMAX = oddLength;
        else
            tempMAX = evenLength;
        if (maxLength < tempMAX)
        {
            maxLength = tempMAX;
            begin = maxLength % 2 ? i - maxLength / 2 : i - maxLength / 2 + 1;
            ;
        }
    }
    *(s + begin + maxLength) = '\0';
    return s + begin;
}
int main()
{

    char s[] = "babad";

    char *ret = longestPalindrome(s);
    printf("%s ", ret);
    return 0;
}