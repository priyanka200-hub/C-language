//WAP to print the sum of this series:   
//  1-2+3-4+5-6...upto n

#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    // int sum =0;
    // for(int i=1; i<=n; i++){
    //     if(i%2!=0){
    //         sum +=i;
    //     }
    //     else{
    //         sum -= i;
    //     }
    // }
    // printf("%d", sum);

    //method 2
    int sum=0;
    if (n%2==0){
        sum = -n/2;
    }
    else{
        sum = (-n/2)+n;
    }
    printf("%d", sum);
}