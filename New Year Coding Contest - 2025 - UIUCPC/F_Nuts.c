#include<stdio.h>
int main()
{
    int n, nut = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int nutes;
        scanf("%d", &nutes);

        if(nutes > 10) nut += (nutes - 10);
    }

    printf("%d", nut);

    return 0;
}