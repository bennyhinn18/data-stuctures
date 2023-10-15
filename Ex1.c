/*Ex.no:1a ARRAY IMPLEMENTATION OF STACK
AIM:
To implement stack using array in C.
ALGORITHM:
1: Include all the header files and give the maximum size.
2: Define a integer variable 'top' and initialize with '-1'. (int top = -1).
3: Create a one dimensional array ‘a’ with max size.
4: Display the menu with list of operations and perform the operation selected by the user on the stack.
5: Operations:
push - to insert an element into the stack.
pop - to delete an element from the stack
display – to display the elements of a stack.
Exit – to exit from the program
*/
#include <stdio.h>
int main()
{
    int a[10] = {0}, i, top = -1, max = 10, n, x;
    printf("\n\tMENU\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    do
    {
        printf("\nEnter your choice\n");
        scanf("%d", &n);
        switch (n)
        {
            case 1:
                if (top == max - 1)
                    printf("Stack is FULL\n");
                else
                {
                    printf("Enter the element\n");
                    scanf("%d", &x);
                    a[++top] = x;
                }
                break;
            case 2:
                if (top < 0)
                    printf("Stack is Empty\n");
                else
                    printf("The deleted item =%d", a[top--]);
                break;
            case 3:
                if (top < 0)
                    printf("The stack is empty\n");
                else
                {
                    printf("The elements of the stack are :");
                    for (i = 0; i <= top; i++)
                        printf("%d\n", a[i]);
                }
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    while (n != 4);
    return 0;
}
