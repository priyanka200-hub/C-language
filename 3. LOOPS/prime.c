//WAP to check if a number is composite or prime
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n==1 || n==0){
        printf("Is  neither prime nor composite");
        return 0;
    }
    int flag =0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag =1;    //if n is divisible by i, then flag become 1 means it is composite
            break;
        }
    }
    // printf("%d ",flag);
    if(flag ==0) printf("Is prime");
    else printf("Is composite");
}