#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX-1)
    {
        printf("\nStack Overflow...");
    }
    top = top+1;
    stack_arr[top] = data;
    printf("\nPush element = %d\n",stack_arr[top]);
}
void pop()
{
    if (top == -1)
    {
        printf("\nStack Empty...\n");
    }
    int item;
    item = stack_arr[top];
    top--;
    printf("\nPopped element = %d\n ",item);
    
}
void peek()
{
    int peek;
    peek = stack_arr[top];
    printf("\nPeek element = %d \n",stack_arr[top]);
}
void display()
{
    if (top == MAX-1)
    {
        printf("\nStack Overflow..\n");
        return;
    }
    printf("\nStack element present....\n");
    for (int i = 0; i < top; i++)
    {
        printf("%d\t",stack_arr[i]);
    }
    
    
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    push(100);
    peek();
    display();
    
}