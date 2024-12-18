#include <stdio.h>
int singleDigitSum(int num)
{
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = singleDigitSum(num);
    printf("Single digit sum is: %d\n", result);
    return 0;
}
