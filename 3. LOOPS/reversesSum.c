//WAP to print the sum of given number and its reverse
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int count=0;
    int sum=0;
    int reverse=0;
    int original = n;     //after the loop finishes n become 0 that's why we need to store it earlier
    while(n>0){
        int last_digit= n%10;
        count++;
        reverse = 10*reverse;
        reverse += last_digit;
        n/=10;
    }
    sum = original+reverse;
    printf("Reverse is %d\n", reverse);
    printf("Sum of original number and reverse  number is %d", sum);
}