#include<stdio.h>
int main(){
    int op1,op2; //declaration
    //op1=10;//intialization
    //op2=20;//intialization
    printf("enter two value:");
    scanf("%d",&op1);
    scanf("%d",&op2);
    int sum,diff,prod,quo,rem;
    sum=op1+op2;
    diff=op1-op2;
    prod=op1*op2;
    quo=op1/op2;
    rem=op1%op2;
    printf("Sum of %d and %d:%d\n",op1,op2,sum);
    printf("Difference of %d and %d:%d\n",op1,op2,diff);
    printf("Product of %d and %d:%d\n",op1,op2,prod);
    printf("Quotient of %d and %d:%d\n",op1,op2,quo);
    printf("Remainder of %d and %d:%d\n",op1,op2,rem);
}