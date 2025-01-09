#include <stdio.h>
int main()
{
    int k, l, sum = 0;
    scanf("%d %d", &k, &l);

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            int room_num = (i * 100) + j;
            sum += room_num;
        }
    }

    printf("%d\n", sum);

    return 0;
}