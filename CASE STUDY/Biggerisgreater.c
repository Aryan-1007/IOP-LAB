#include <stdio.h>
#include <string.h>

long long stringintoascii(char arr[])
{
    int asc = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        asc = asc * 1000 + arr[i];
    }
    return asc;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char word[101], ans[101] = "";
        scanf("%s", word);

        long long min = stringintoascii(word);
        long long max = 999999999999999999;
        for (int j = 0; word[j] != '\0'; j++)
        {
            for (int k = j + 1; word[k] != '\0'; k++)
            {
                char temp = word[j];
                word[j] = word[k];
                word[k] = temp;

                long long temp_val = stringintoascii(word);
                if (temp_val > min && temp_val <= max)
                {
                    strcpy(ans, word);
                    max = stringintoascii(word);
                }
                temp = word[j];
                word[j] = word[k];
                word[k] = temp;
            }
        }

        if (strlen(ans) > 0)
            printf("%s\n", ans);
        else
            printf("no answer\n");
    }

    return 0;
}
