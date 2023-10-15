/*Ex.no:2 	LINKED LIST IMPLEMENTATION OF LIST
AIM:
To implement List using Linked List in C.
ALGORITHM:
1: Include all the header files.
2: Create a structure LIST with no and *next.
3: Declare all the functions with which operations are done on the linked list.
4: Display the menu with list of operations and perform the operation selected by the user on the linked List.
5: Operations:
create – to create the linked list
insert- to insert an element into the linked list in the chosen position.
deletion - to delete an element from the chosen position in the linked list
display – to display the elements of the linked List.
exit – to exit from the program

PROGRAM:*/

#include <stdio.h>
#include <stdlib.h>
#define NULL 0
typedef struct list
{
    int no;
    struct list *next;
} LIST;
LIST *p, *t, *h, *y, *ptr, *pt;
void create(void);
void insert(void);
void delet(void);
void display(void);
int j, pos, k = 1, count;
int main()
{
    int n, i = 1, opt;
    p = NULL;
    printf("%d", sizeof(LIST));
    printf("Enter the no of nodes :\n ");
    scanf("%d", &n);
    count = n;
    while (i <= n)
    {
        create();
        i++;
    }
    printf("\nEnter your option:\n");
    printf("1.Insert \t 2.Delete \t 3.Display \t 4.Exit\n");
    do
    {
        scanf("%d", &opt);
        switch (opt)
        {
            case 1:
                insert();
                count++;
                break;
            case 2:
                delet();
                count--;
                if (count == 0)
                {
                    printf("\n List is empty\n");
                }
                break;
            case 3:
                printf("List elements are:\n");
                display();
                break;
            case 4:
                exit(0);
                break;
        }
        printf("\nEnter your option \n");
    }
    while (opt != 4);
    getch();
    return 0;
}
void create()
{
    if (p == NULL)
    {
        p = (LIST *) malloc(sizeof(LIST));
        printf("Enter the element:\n");
        scanf("%d", &p->no);
        p->next = NULL;
        h = p;
    }
    else
    {
        t = (LIST *) malloc(sizeof(LIST));
        printf("\nEnter the element");
        scanf("%d", &t->no);
        t->next = NULL;
        p->next = t;
        p = t;
    }
    display();
}
void insert()
{
    t = h;
    p = (LIST *) malloc(sizeof(LIST));
    printf("Enter the element to be inserted:\n");
    scanf("%d", &p->no);
    printf("Enter the position to insert:\n");
    scanf("%d", &pos);
    if (pos == 1)
    {
        h = p;
        h->next = t;
    }
    else
    {
        for (j = 1; j < (pos - 1); j++)
            t = t->next;
        p->next = t->next;
        t->next = p;
        t = p;
    }
    display();
}
void delet()
{
    printf("Enter the position to delete:\n");
    scanf("%d", &pos);
    if (pos == 1)
    {
        h = h->next;
    }
    else
    {
        t = h;
        for (j = 1; j < (pos - 1); j++)
            t = t->next;
        pt = t->next->next;
        free(t->next);
        t->next = pt;
    }
    display();
}
void display()
{
    t = h;
    while (t->next != NULL)
    {
        printf("\t%d", t->no);
        t = t->next;
    }
    printf("\t %d\t", t->no);
}
/*
Output

4Enter the no of nodes :
3
Enter the element:
4
4
Enter the element5
4 5
Enter the element6
4 5 6
Enter your option:
1.Insert 2.Delete 3.Display 4.Exit
1
Enter the element to be inserted:
7
Enter the position to insert:
3
4 5 7 6
Enter your option
3
List elements are:
4 5 7 6
Enter your option
2
Enter the position to delete:
2
4 7 6
Enter your option
4

RESULT:
Thus, the program to implement List ADT using Linked list in C was executed successfully*/
