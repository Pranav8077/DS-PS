#include<stdio.h>
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int n1,n2;
    printf("Enter two numbers=> ");
    scanf("%d %d",&n1,&n2);
    printf("LCM of %d %d is %d",n1,n2,lcm(n1,n2));
}