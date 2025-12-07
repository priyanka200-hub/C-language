//Take foue input integers and print the greatest of them
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);
    if (a>b && a>c && a>d){
        printf("a is greatest");
    }
    else if (b>a && b>c && b>d){
        printf("b is greatest");
    }
    else if (c>b && c>a && c>d){
        printf("c is greatest");
    }
    else if (d>b && d>c && d>a){
        printf("d is greatest");
    }
    pending..................................
}