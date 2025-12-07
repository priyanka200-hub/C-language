#include<stdio.h>
#include<math.h>
int main(){
    int n,p;
    printf("Enter base: ");
    scanf("%d", &n);
    printf("Enter power: ");
    scanf("%d", &p);
    // int result = pow(n,2);
    // printf("%d", result);
    int result=1;
    for(int i=1; i<=p; i++){
        result*=n;
    }
    printf("%d to the power %d is %d", n,p,result);
}