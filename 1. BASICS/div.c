//WAP to divide numbers
#include<stdio.h>
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    int b;
    printf("Enter number: ");
    scanf("%d", &b);
    float result; 
    // result = a/b; // implicit typecasting
    result = (float)a/b; //explicit typecasting
    printf("Division of %d and %d is: %f", a,b,result);
}