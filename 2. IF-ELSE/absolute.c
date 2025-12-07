#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%D", &num);
    if (num<0){
        // num *=-1;
        int abs = num*-1;
        printf("Absolute of %d is %d",num ,abs);
    }
    else{
        printf("Absolute of %d is %d",num ,num);
    }
}