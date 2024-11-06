#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the dimension of first traingle=> ");
    scanf("%d",&a);
     printf("Enter the dimension of second traingle=> ");
    scanf("%d",&b);
     printf("Enter the dimension of third traingle=> ");
    scanf("%d",&c);
    if(a==b&&a==c&&b==c){
        printf("Equivalence triangle");
    }
    else if(a==b||a==c||b==c){
        printf("Isosceles triangle");
    }
    else{
        printf("Scalene triangle");
    }
}