/*Ex.no:8 		IMPLEMENTATION OF HEAPS USING PRIORITY QUEUE 
AIM: 
To implement the Heap using Priority Queue in C. 
ALGORITHM: 
1: Create the heap using Priority Queue. 
2: Declare all the functions with which operations are done on the Priority Queue. 
3: Display the menu with list of operations and perform the operation selected by the user on the Priority Queue. 
4: Operations 
Insert – to insert an element into the Priority Queue. 
Delete - to delete an element from the Priority Queue. 
Display – to display the elements of the Priority Queue. 
exit – to exit from the program 
PROGRAM:*/ 
#include<stdio.h> 
#include<malloc.h> 
void insert(); 
void del(); 
void display(); 
struct node 
{ 
int priority; 
int info; 
struct node *next; 
}*start=NULL,*q,*temp,*new; 
typedef struct node N; 
void main() 
{ 
int ch; 
do 
{ 
printf("\n[1] INSERTION\t[2] DELETION\t[3] DISPLAY [4] EXIT\t:"); 
scanf("%d",&ch); 
switch(ch) 
{ 
case 1:insert(); 
break; 
case 2:del(); 
break; 
case 3:display(); 
break; 
case 4: 
break; 
} 
} 
while(ch<4); 
} 
void insert() 
{ 
int item,itprio; 
new=(N*)malloc(sizeof(N)); 
printf("ENTER THE ELT.TO BE INSERTED :\t"); 
scanf("%d",&item); 
printf("ENTER ITS PRIORITY :\t"); 
scanf("%d",&itprio); 
new->info=item; 
new->priority=itprio; 
new->next=NULL; 
if(start==NULL )
{ 
//new->next=start; 
start=new; 
} 
else if(start!=NULL&&itprio<=start->priority) 
{ new->next=start; 
start=new; 
} 
else 
{ 
q=start; 
while(q->next != NULL && q->next->priority<=itprio) 
{q=q->next;} 
new->next=q->next; 
q->next=new; 
} 
} 
void del() 
{ 
if(start==NULL) 
{ 
printf("\nQUEUE UNDERFLOW\n"); 
} 
else 
{ 
new=start; 
printf("\nDELETED ITEM IS %d\n",new->info); 
start=start->next; 
//free(start); 
} 
} 
void display() 
{ 
temp=start; 
if(start==NULL) 
printf("QUEUE IS EMPTY\n"); 
else 
{ 
printf("QUEUE IS:\n"); 
if(temp!=NULL) 
for(temp=start;temp!=NULL;temp=temp->next) 
{ 
printf("\n%d priority =%d\n",temp->info,temp->priority); 
//temp=temp->next; 
} 
} 
} 
/*OUTPUT: 
[1] INSERTION [2] DELETION [3] DISPLAY [4] EXIT :1 
ENTER THE ELT.TO BE INSERTED : 2 
ENTER ITS PRIORITY : 1 
[1] INSERTION [2] DELETION [3] DISPLAY [4] EXIT :1 
ENTER THE ELT.TO BE INSERTED : 3 
ENTER ITS PRIORITY : 2 
[1] INSERTION [2] DELETION [3] DISPLAY [4] EXIT :3 
QUEUE IS: 
2 priority =1 
3 priority =2 
[1] INSERTION [2] DELETION [3] DISPLAY [4] EXIT :2 
DELETED ITEM IS 2 
[1] INSERTION [2] DELETION [3] DISPLAY [4] EXIT :3 
QUEUE IS: 
3 priority =2 
[1] INSERTION [2] DELETION [3] DISPLAY [4] EXIT :4 




RESULT: 
Thus, the program to implement the Heap using Priority Queue in C was executed successfully.
*/