//Function prototype -> if a function is declared after main() function then you should add "void function_name()" for calling

#include<stdio.h>
int main(){
    void india();                //function prototype
    india();
}
void india (){
    void england();              //function prototype
    england();
    printf("Hello India");
}
void england(){
    printf("Hello england\n");
}
