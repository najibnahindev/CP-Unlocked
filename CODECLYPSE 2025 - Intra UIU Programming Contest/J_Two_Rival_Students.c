#include <stdio.h>
int min(int a, int b)
{
   return (a < b) ? a : b;
}

int max(int a, int b)
{
   return (a > b) ? a : b;
}

int absVal(int x)
{
   return (x < 0) ? -x : x;
}

int disfunc(int n, int x, int a, int b)
{
   if (a > b)
   {
      int temp = a;
      a = b;
      b = temp;
   }

   if (x == 0)
      return absVal(b - a);

   int moves = min(x, absVal(n - b + a - 1));
   return min(n - 1, absVal(b - a) + moves);
}

int main()
{
   int n;
   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {
      int total, x, a, b;
      scanf("%d %d %d %d", &total, &x, &a, &b);
      printf("%d\n", disfunc(total, x, a, b));
   }

   return 0;
}