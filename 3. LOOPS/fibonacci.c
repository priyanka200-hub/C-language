//Print the fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int fibo=1;
    int a=1,b=1;
    printf("1 1");
    for (int i=1; i<=n-2; i++){
        fibo = a+b;
        a=b;
        b=fibo;
        printf(" %d", fibo);
    }
}