#include <stdio.h>
int prime_factor(int n)
{
    while (n % 2 == 0)
    {
        printf("%d", 2);
        n /= 2;
    }
    for (int i = 3; i*i <= n; i += 2)
    {
        while (n % i == 0){
            printf(" %d", i);
            n /= i;
        }
    }
    if(n>2){
        printf("%d",n);
    }
}
int main(){
    int n;
    printf("Enter the numbers");
    scanf("%d", &n);
    printf("Prime factor of %d are:"  , n);
    prime_factor(n);
    return(0);

}
