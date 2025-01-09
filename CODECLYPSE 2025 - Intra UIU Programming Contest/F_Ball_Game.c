#include <stdio.h>
 
int main()
{
    int n, current = 1;
    scanf("%d", &n);
 
    for (int i = 1; i < n; i++)
    {
        int next = (current + i) % n;
        
        if(next == 0) next = n;
 
        printf("%d ", next);
        
        current = next;
    }
 
    return 0;
}