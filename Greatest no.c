#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three no=>");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d is gratest",a);
    }
    else if(b>c){
        printf("%d is gratest",b);
    }
    else{
        printf("%d is gratest",c);
        
    }
}