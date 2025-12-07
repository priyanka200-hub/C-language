//Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%D", &n);
    if ((n%5==0 || n%3==0) && n%15!=0){
            printf("It is divisible by 5 or 3 but not divisible by 15");
    }else{
        printf("It is not divisible by 15");
    }
}