//Take three positive integers input and print the greatest of them
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%D", &a);
    printf("Enter b: ");
    scanf("%D", &b);
    printf("Enter c: ");
    scanf("%D", &c);
    if(a>b && a>c){
        printf("a is greatest");
    }
    else if(b>a && b>c){
        printf("b is greatest");
    }
    else if(c>a && c>b){
        printf("c is greatest");
    }
    else if(a==b && a>c){
        printf("a and b are greater");
    }
    else if(b==c && b>a){
        printf("b and c are greater");
    }
    else if(a==c && a>b){
        printf("a and c are greater");
    }
    else{
        printf("All are equal");
    }
}