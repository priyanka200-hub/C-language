//WAP to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is calles an armstrong number. For example, 153 = (1*1*1)+(5*5*5)+(3*3*3)
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    // printf("Enter n: ");
    // scanf("%d", &n);
    for (n=1; n<=500; n++){
        int original = n;
        int count=0;
        int armstrong=0;
        int i = n;
        for (; i>0; i/=10){
            int digit = i%10;
            count++;
        }
        i=n;
        for (; i>0; i/=10){
            int digit = i%10;
            int a=1;
            for(int j=1; j<=count; j++){
            a *= digit;
            }
            armstrong += a;
        }
        if(n==armstrong){
            printf("%d\n", armstrong);
        }
    }
}

