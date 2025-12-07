// WAP to add numbers 
#include<stdio.h>
int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter second number: ");
    scanf("%d", &b);
    int sum = 0;  //0 to initialise sum and it avoid garbage value
    sum = a+b;
    printf("Sum of %d and %d is: %d", a,b,sum);
    scanf("%d", &sum);

}