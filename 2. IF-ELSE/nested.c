//If the ages of ram, Shyamand Ajay are input through the keyboard. WAP to determine the youngest of the three using nested if-else
#include<stdio.h>
int main(){
    int ram, shyam, ajay;
    printf("Enter ram's age: ");
    scanf("%d", &ram);
    printf("Enter shyam's age: ");
    scanf("%d", &shyam);
    printf("Enter ajay's age: ");
    scanf("%d", &ajay);

    if(ram>shyam){
        if (ram> ajay){
            printf("Ram's age is greatest");
        }
        else{
            printf("Ajay's age is greatest");
        }
    }
    else{
        if(shyam>ajay){
            printf("Shyam's age is greatest");
        }
        else{
            printf("Ajay's age is greatest");
        }
    }

}