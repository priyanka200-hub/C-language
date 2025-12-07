#include<stdio.h>
int fact(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int combination(int n, int r){
    int combination = 1;
    combination = fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            int p =combination(i,j);
            printf(" %d", p);
        }
        printf(" \n");
    }
}