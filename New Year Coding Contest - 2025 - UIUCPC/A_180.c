#include<stdio.h>
#include<string.h>
int main()
{
  char str[100005];
  scanf("%s", str);
  
  int len = strlen(str);
  
  for(int i = 0, j = len - 1; i < j; i++, j--)
  {
    int temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  for(int i = 0; i < len; i++)
  {
    if(str[i] == '6') str[i] = '9';
    else if(str[i] == '9') str[i] = '6';
  }
  
  printf("%s", str);

  return 0;
}