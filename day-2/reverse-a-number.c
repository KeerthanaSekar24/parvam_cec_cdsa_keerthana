#include<stdio.h>
int main(){
    int num, rev=0, org;
    printf("Enter a number to be reversed:");
    scanf("%d",&num);
    org=num;
    printf("Entered number:%d\n",num);
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;    
    }
    printf("Reversed number: %d\n",rev);
    if(org==rev){
        printf("The given number is a palindrome");
    }
    else{
        printf("The given number is not a palindrome.");
    }
}