/* Ex.No 3 Linked list implementation of stack.txt
Text

Ex.No 4 ARRAY IMPLEMENTATION OF QUEUE.txt
Text

Ex.No 5 LINKED LIST IMPLEMENTATION OF QUEUE.txt
Text
Class comments

Add class comment…

Ex.no:3				 LINKED LIST IMPLEMENTATION OF STACK

AIM:
To implement Stack using Linked List in C.

ALGORITHM:
1: Include all the header files.
2: Create a structure node with data and *link.
3: Declare all the functions with which operations are done on the linked list implementation of stack.
4: Display the menu with list of operations and perform the operation selected by the user on the linked List implementation of stack.
5: Operations:
Push - to insert an element into the stack.
Pop - to delete an element from the stack.
display – to display the elements of the stack.
exit – to exit from the program

PROGRAM:*/

#include <stdio.h>
#include <stdlib.h>

void pop();
void push(int value);
void display();

struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL, *temp;

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // To push a new element into stack
            printf("Enter a new element: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            // To pop an element from the stack
            pop();
            break;
        case 3:
            // To display the elements of the stack
            display();
            break;
        case 4:
            // To exit from the program
            exit(0);
        default:
            printf("Wrong choice\n");
        } /*End of switch*/
    } /*End of while*/
    return 0;
} /*End of main()*/

void push(int value)
{
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = top;
    top = temp;
} /*End of push()*/

void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    temp = top;
    top = top->link;
    printf("Popped element is %d\n", temp->data);
    free(temp);
} /*End of pop()*/

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    temp = top;
    printf("Stack elements are:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
} /*End of display()*/