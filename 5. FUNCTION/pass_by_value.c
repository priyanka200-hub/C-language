// PASS BY VALUE = variables of main and other functions have different memory blocks i.e. there values differ but "pass by value" passes the value of main function to other function
#include<stdio.h>
int sum(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}
int div(int a, int b){
    return a / b;
}
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int result1 = sum(a,b);
    printf("Sum is %d\n" , result1);
    int result2 = sub(a,b);
    printf("Sub is %d\n" , result2);
    int result3 = mul(a,b);
    printf("Mul is %d\n" , result3);
    int result4 = div(a,b);
    printf("Div is %d\n" , result4);
}