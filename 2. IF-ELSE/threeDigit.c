//Take positive integer input and tell if it ia a three digit number or not
#include<stdio.h>
int main(){
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if(num>=100 && num<=999){
        printf("It's a three digit number");
    }
    printf("No, it's not a three digit number");

}