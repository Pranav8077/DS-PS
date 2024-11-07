#include<stdio.h>
int main(){
    int a;
    printf("Enter the temperature");
    scanf("%d",&a);
    if(a<=0){
        printf("Freezing Weather");
    }
    else if(a>0&&a<=10){
        printf("Very cold weather");
    }
    else if(a>10&&a<=20){
        printf("Cold weather");
    }
    else if(a>20&&a<=30){
        printf("Normal Weather");
    }
    else if(a>30&&a<=40){
        printf("Hot weather");
    }
    else{
        printf("Extremly Hot");
    }
    return 0;
}