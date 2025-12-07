//Display this GP - 100,50,25.... upto 'n' terms
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=100; i>=n; i/=2){
        printf( " %d", i); 
    }
}