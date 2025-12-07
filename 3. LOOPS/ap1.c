//Display this AP - 100,97,94.. upto all terms which are positive
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=100; i>=n; i-=3){
        if(i<0){
            break;
        }
        printf( " %d", i); 
    }
}