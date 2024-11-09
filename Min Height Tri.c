#include <stdio.h>
int min_height_tri(int b, int A)
{
    if (b <= 0)
    {
        return -1;
    }
    else
    {
        int h = (2 * A + b - 1) / b;
        return h;
    }
}
int main()
{
    int b, A;
    printf("Enter the base (b)-> ");
    scanf("%d", &b);
    printf("Enter the area (a)-> ");
    scanf("%d", &A);
    int h = min_height_tri(b, A);
    if (h == -1)
    {
        printf("Invalid base \n");
    }
    else
    {
        printf("The smallest height h of a triagle which area %d is -> %d", A, h);
    }
}