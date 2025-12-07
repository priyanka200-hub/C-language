// A positive number is entered through the keyboard. Write a function to obtain the factors of this number 
#include<stdio.h>
int prime(int *x){
    for(int i=1; i<=*x; i++){
        if(*x%i==0){
            printf("%d\n", i);
        }
    }
}
int main(){
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    prime(&x);
}