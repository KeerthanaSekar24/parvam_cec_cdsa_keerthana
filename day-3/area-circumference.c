#include<stdio.h>
#define PI 3.142
float area(float rad){
    return PI*PI*rad;
} 
float circumference(float rad){
    return 2*PI*rad;
}
int main(){
    float radius,result;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    result=area(radius);
    printf("area of circle for the given radius (%f):%f\n",radius,result);
    result=circumference(radius);
    printf("circumference of circle for the given radius(%f):%f",radius,result);
}