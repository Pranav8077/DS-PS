// Online C compiler to run C program online
#include <stdio.h>
int palindrome(int no){
    int rev=0,rem,original;
    original=no;
    while(no!=0){
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    return original ==rev ;
}

int main() {
    int no;
    printf("Enter a no=> ");
    scanf("%d",&no);
    if(palindrome(no)){
        printf("%d is palindrome no:\n",no);
    }
    else{
        printf("%d is not palindrome no:\n",no);
    }

    return 0;
}