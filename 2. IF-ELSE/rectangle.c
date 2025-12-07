//Given the length and breadth of a rectangle, Write a program to find whether the area of the rectangle is greater than its perimeter
#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);

    int area=1, perimeter;
    area = l*b;
    perimeter = 2*(l+b);
    printf("Area is %d\n", area);
    printf("Perimeter is %d\n", perimeter);
    if (area> perimeter){
        printf("Area is greater");
    }
    else{
        printf("Perimeter is greater");
    }
}