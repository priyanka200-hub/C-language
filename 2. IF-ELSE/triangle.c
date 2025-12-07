// Take three numbers input and tell if they can be the sides of a triangle
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%D", &a);
    printf("Enter b: ");
    scanf("%D", &b);
    printf("Enter c: ");
    scanf("%D", &c);
    if (a+b>c && b+c>a && a+c>b){
        printf("Yes, they are sides of triangle");
    }
    else{
        printf("No, they are not sides of triangle");
    }
}