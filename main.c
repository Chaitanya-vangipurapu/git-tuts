#include<stdio.h>
#include<string.h>
#include<ctype>
char stack[100];
int top=-1,size=50;
void push(char item){
    if(size==top+1){
        printf("stack over flow");
    }
    else{
        stack[top++]=item;
    }
}
char pop(){
    if(top==-1){
        printf("under flow");
    }
    else{
        return stack[top--];
    }
}

int precedence(char ope);
int main(){
    char input[123],output[120];
    printf("enter the infix expression");
    scanf("%s",input);
    push('(');
    strcat(input,")");
    for(i=0;i,str)
}