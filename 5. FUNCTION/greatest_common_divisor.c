// Write a function to compute the greatest common divisor of two given numbers

//PASS BY REFERENCE

#include<stdio.h>
int min(int *x, int *y){
    if (*x < *y) return *x;
    else return *y;
}
int common(int *x, int *y){
    int i,hcf=1;
    for(i= min(x,y); i>=1; i--){            //x and y are already pointers, so we don't need to take their address sign
        if(*y%i==0 && *x%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;        //value of hcf is returned by the common() function and gets stored in hcf
}
int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    int gcd = common(&x,&y);        // x and y are integers, so we need to pass address sign   
    printf("HCF is %d",gcd);
}