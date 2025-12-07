//WAP to calculate volume of a sphere
#include<stdio.h>
int main(){
    int r ;
    printf("Enter radius: ");
    scanf("%d", &r);
    float volume;
    volume = (float) 4/3*3.14*pow(r,3);
    printf("Volume of sphere is: %f", volume);
}