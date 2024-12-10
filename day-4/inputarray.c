#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the (%d)elements of an array:",size);
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }    
    printf("the array elements are as follows:\n");
    for (int i=0;i<size;i++){
        printf("the element in index arr[%d]:%d\n",i,arr[i]);
    }
}