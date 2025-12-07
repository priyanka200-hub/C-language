#include<stdio.h>

int sum(int a, int b){
    return a + b;
}
int main(){
    int result = sum(5,20);
    printf("Sum is %d", result);
}