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
int permutation(int n, int r){
    if(n<r){
        printf("n must be greater than r");
        return 0;
    }
    int permutation = 1;
    permutation = fact(n)/fact(n-r);
    printf("Permutation is %d", permutation);
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    permutation(n,r);
}