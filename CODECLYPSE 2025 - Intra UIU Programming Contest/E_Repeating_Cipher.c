#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    char str[n+1];
    scanf("%s", str);

    for (int i = 0; i < n; i++)
    {
      
      count += i;
      
      if(count >= n) return 0;
      
      printf("%c", str[count]);
      

    }

    return 0;
}
