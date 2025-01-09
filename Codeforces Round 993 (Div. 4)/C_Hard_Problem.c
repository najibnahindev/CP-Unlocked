#include<stdio.h>
int main()
{
    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int m, a, b, c, x, y, z, zz, p;
        scanf("%d %d %d %d", &m , &a, &b, &c);

        if(m >= a)
        { 
            x = a; 
            y = m - a;
        }
        else
        {
            x = m;
            y = 0;
        } 
        if(m >= b) 
        {
            z = b;
            zz = m - b;
        }
        else
        {
            z = m;
            zz = 0;
        }
        if(c >= y + zz) p = y + zz;
        else p = c;

        printf("%d\n", x + z + p);
    }
     
    return 0;
}