#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[105];
        scanf("%s", str);

        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == 'p')
                str[j] = 'q';
            else if (str[j] == 'q')
                str[j] = 'p';
        }
        int length = strlen(str);

        for (int i = 0, j = length - 1; i <= j; i++, j--)
        {
            int temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }

        printf("%s\n", str);
    }

    return 0;
}