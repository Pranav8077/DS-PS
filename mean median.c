#include<stdio.h>
float calculate_mean(float number[],int size){
    float sum=0.0;
    for(int i=0;i<size;i++){
        sum+=number[i];
    }
    return sum / size;

}
float calculate_median(float number[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(number[i]>number[j]){
                float temp=number[i];
                number[i]=number[j];
                number[j]=temp;

            }
        }
    }
    return number[size/2];

}
int main(){
    float number[5];
    int size=5;
    printf("Enter five number=> ");
    for(int i=0;i<size;i++){
        printf("number %d: ",i+1);
        scanf("%f",&number[i]);
    }
    float mean =calculate_mean(number,size);
    float median=calculate_median(number,size);
    printf("the mean of the number is %f",mean);
    printf("the median of the number is %f",median);


}