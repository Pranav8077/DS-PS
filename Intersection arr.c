 #include<stdio.h>
void intersection(int arr1[],int size1,int arr2[],int size2){
    printf("Intersection of two array is-> ");
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr1[i]);
                 break;
            }
        }
    }
}
int main(){
    int size1,size2;
    printf("Enter the size of first array-> ");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the elements of first array->");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second element-> ");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the elements of second array-> ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    intersection(arr1,size1,arr2,size2);

}