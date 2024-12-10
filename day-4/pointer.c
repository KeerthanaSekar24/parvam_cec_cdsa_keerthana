#include<stdio.h>
int main(){
    int num =20;
    printf("the value of number:%d",num);
    printf("The address of number(%d):%p",&num);
    int*ptr= &num;
    printf("the address of pointer:%p\n",ptr);
    printf("The value of pointer:%d\n",*ptr);
    *ptr=30;
    printf("The updated value of number:%d\n",num);
}