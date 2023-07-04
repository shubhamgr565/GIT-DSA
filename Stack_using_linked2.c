#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * link;
};

struct node * top = NULL;
void push(int value)
{
    struct node * newNode = malloc(sizeof(struct node ));
    if (newNode == NULL)
    {
        printf("Memory allocation Failed.\n");
        return;
    }
    newNode->data = value;
    newNode->link = top;
    top = newNode;
    printf("%d Pushed to the stack\n",value);
}
void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty!\n");
        return;
    }
    else
    {
        struct node * temp = top;
        top = top->link;
        int poped_value = temp->data;
        free(temp);
        printf("%d popped from the stack.\n",poped_value);

    }
}
void display()
{
    if (top == NULL)
    {
        printf("Stack is empty...");
        return;
    }
    else
    {
        struct node * current = top;
        printf("Stack element ...");

        while (current!=NULL)
        {
            printf("%d , ",current->data);
            current = current->link;
        }
        printf("\n");
        
    }
    
}
int main()
{
    int choice , value;
    while (1)
    {
        printf("Stack Operations.....\n");
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.Display \n");
        printf("4.Exit \n");
        printf("Enter your Choice \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to Push: ");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting Program....\n");
            exit(0);
        default:
            printf("Invalid choice . Please enter a valid  option.\n");
            break;
        }
        
    }
    
}