// Write a function to compute the greatest common divisor of two given numbers

//PASS BY VALUE

#include<stdio.h>
int min(int x, int y){
    if (x<y) return x;
    else return y;
}
int common(int x, int y){
    int i,gcd=1;
    for(i=min(x,y); i>=1; i--){
        if(x%i==0 && y%i==0){
            gcd=i;
            break;
        }
    }
    return gcd;
}
int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    int hcf = common(x,y);
    printf("HCF is %d", hcf);
}