#include<stdio.h>
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;

    }
}
int main(){
    int n1,n2;
    printf("Enter two no");
    scanf("%d %d",&n1,&n2);
    printf("GCD of %d and %d is %d",n1,n2,gcd(n1,n2));


}