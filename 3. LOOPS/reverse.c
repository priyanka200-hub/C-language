//WAP to print reverse of a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int count=0;
    int reverse=0;
    while(n>0){
        int last_digit= n%10;
        count++;
        reverse = 10*reverse;
        reverse += last_digit;
        n/=10;
    }
    printf("Reverse is %d", reverse);
}