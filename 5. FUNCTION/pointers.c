// pointers (*) = it stores the address of variable
// PAAS BY REFERENCE = it does not need new memory blocks it access the value from main() by pointers 
#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;             // x has stored the address of variable 'a'
    printf("%p\n", &a);
    printf("%p\n", x);       // prints value of x i.e. x has stored the address of variable 'a'
    printf("%p\n", &x);      // pointers itself has different memory block and different address   
    printf("%d\n", *x);      // it prints the value of address which is stored in this pointer
    
    int** y = &x;            // y has stored the address of pointer x
    printf("%d\n", **y);        
    printf("%p\n", y);

    int*** z = &y;           // z has stored the address of pointer y
    printf("%d\n", ***z);        
    printf("%p\n", z);
}
