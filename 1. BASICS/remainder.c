//Take two integers input, a and b: a>b and find the remainder when a is divided by b
#include<stdio.h>
int main(){
    int a;
    printf("Enter dividend: ");
    scanf("%d", &a);
    int b;
    printf("Enter divisor: ");
    scanf("%d", &b);
    int remainder;
    remainder = a%b;
    printf("Remainder is %d", remainder);
}