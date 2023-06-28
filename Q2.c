#include<stdio.h>
#include<stdlib.h>
#define MAX  4

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if(top == MAX -1)
    {
        printf("\nStack overflow....");
        return ;
    }
    top = top+1;
    stack_arr[top] = data;
    printf("%d\t",stack_arr[top]);
}
int pop()
{
    int value;
    if(top == -1)
    {
        printf("\nStack underflow...");
        exit(1);
    }
    value = stack_arr[top];
    top = top -1;
    return value;
}
void display()
{
    int i;
    if(top  == -1)
    {
        printf("\nStack underflow.....");
        return;
    }
    printf("\n");
    for(i=top; i>=0; i--)
    {
        printf("%d\t",stack_arr[i]);

    }
}
int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    data = pop();
    display();
    
}