#include<stdio.h>
int fact(int x){
    if(x<0){
        printf("Factorial is not defined for negative numbers");
        return 0;
    }
    int fact=1;
    for(int i=1; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int combination(int n, int r){
    if(n<r){
        printf("n must be greater than r");
        return 0;
    }
    int combination = 1;
    combination = fact(n)/(fact(r)*fact(n-r));
    printf("Combination is %d", combination);
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    combination(n,r);
}