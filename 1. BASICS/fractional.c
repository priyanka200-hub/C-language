//Take float input and print the fractional part of the real number
#include<stdio.h>
int main(){
    float num;
    printf("Enter float number: ");
    scanf("%f", &num);
    int a;
    a=num;
    float fractional_part;
    fractional_part=num-a;
    printf("Fractional part is %f", fractional_part);
}