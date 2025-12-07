#include<stdio.h>
int lcm(int x, int y){
    int i;
    int max = (x>y) ? x:y;
    for( i=max; ; i++){
        if(i%x==0 && i%y==0){
            return i;
        }
    }
}
int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    int result = lcm(x,y);
    printf("LCM is %d", result);
}