// WAP to print all the ASCII value and their equivalent characters of 26 alphabet using a while loop
#include<stdio.h>
int main(){
    int n = 65;
    while (n<=129){
        char ch= (char)n;     //typecasting
        printf("%c -> %d\n", n,ch);
        n++;
    }
}