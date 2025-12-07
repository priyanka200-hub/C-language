// pointers (*) = it stores the address of variable
// PAAS BY REFERENCE = it does not need new memory blocks it access the value from main() by pointers 
#include<stdio.h>
int sum(int *a, int *b){
    return *a + *b;
}
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int result = sum(&a,&b);
    printf("Sum is %d", result);
}
