#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}