#include<stdio.h>
int swap(int a, int b){
    // int temp = a;
    // a = b;
    // b = temp;
    a = a+b;   
    b = a-b;
    a = a-b;
    printf("a -> %d, ",a);
    printf("b -> %d",b);
}
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    swap(a,b);
}