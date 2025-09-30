#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, temp, digit, cnt = 0;
        scanf("%d", &n);
        temp = n;
        while (temp > 0)
        {
            digit = temp % 10;
            temp = temp / 10;
            if (n % digit == 0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
