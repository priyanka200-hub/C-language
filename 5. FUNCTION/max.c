#include<stdio.h>

int data(int *a, int *b){
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
}
int max(int a, int b){
    if(a>b){
        printf("a is greater");
    }
    else printf("b is greater");
}

int main(){
    int a,b;
    data(&a, &b);
    max(a,b);
}