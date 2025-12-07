//WAP to print sum of digits of a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int count=0;
    int sum=0;
    while(n>0){
        int last_digit= n%10;
        sum+=last_digit;
        count++;
        n/=10;
    }
    // printf("%d\n", count);
    printf("%d", sum);
}