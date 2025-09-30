#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);
        sum += (b - a + 1) * k;
    }
    int average = sum / n;
    printf("%d", average);
    return 0;
}
