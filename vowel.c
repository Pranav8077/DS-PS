#include<stdio.h>
int main(){
    char X;
    printf("Enter a alphabet -> ");
    scanf("%c",&X);
    if(X=='a'||X=='e'||X=='i'||X=='o'||X=='u'){
        printf("%c is vowel",X);
    }
    else{
        printf("%c is consonant",X);
    }
}