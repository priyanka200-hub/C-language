//WAP to print sum of all the even digits of a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int count=0;
    int sum=0;
    while(n>0){
        int last_digit= n%10;
        if (last_digit%2==0){
            sum+=last_digit;
        }
        count++;
        n/=10;
    }
    printf("Sum of all even digits is %d", sum);
}