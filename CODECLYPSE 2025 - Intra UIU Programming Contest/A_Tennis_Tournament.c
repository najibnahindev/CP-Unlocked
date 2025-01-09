#include <stdio.h>
int main()
{
    int n, b, p;
    scanf("%d %d %d", &n, &b, &p);

    int total_matches = n - 1;

    int bottleneed = total_matches * (2 * b + 1);

    int towelneed = n * p;

    printf("%d %d\n", bottleneed, towelneed);
    return 0;
}
