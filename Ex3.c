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

#include "stdio.h"
#include "stdlib.h"
void pop();
void push(int value);
void display();
struct node
{
int data;
struct node *link;
};
struct node *top=NULL,*temp;
int main()
{
int choice,data;
while(1) //infinite loop is used to insert/delete infinite number of elements in stack
{
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
printf("\nEnter ur choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: //To push a new element into stack
printf("Enter a new element :");
scanf("%d",&data);
push(data);
break;
case 2: // pop the element from stack
pop();
break;
case 3: // Display the stack elements
display();
break;
case 4: // To exit
exit(0);
}
}
return 0;
}

void display()
{
temp=top;
if(temp==NULL)
{
printf("\nStack is empty\n");
}
printf("\n The Contents of the Stack are...");
while(temp!=NULL)
{
printf(" %d ->",temp->data);
temp=temp->link;
}
}
void push(int data)
{
temp=(struct node *)malloc(sizeof(struct node)); // creating a space for the new element.
temp->data=data;
temp->link=top;
top=temp;
display();
}
void pop()
{
if(top!=NULL)
{
printf("The poped element is %d",top->data);
top=top->link;
}
else
{
printf("\nStack Underflow");
}
display();
}
