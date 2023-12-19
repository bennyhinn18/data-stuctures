/*Ex.no:13 			OPEN ADDRESSING (LINEAR PROBING)

AIM:

To write a C program to implement linear probing to avoid collision.

ALGORITHM:

1.Calculate the hash key using key = data % size;
2.If hashTable[key] is empty, store the value directly using hashTable[key] = data.
3.If the hash index already has some value, check for next index using
key = (key+1) % size;
4.If the next index is available hashTable[key], store the value. Otherwise try for next index.
5.Repeat the steps1 to 4 till we find the space.
PROGRAM*/
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
int h[TABLE_SIZE]={NULL};
void insert()
{
int key,index,i,flag=0,hkey;
printf("Enter a value to insert into hash table: ");
scanf("%d",&key);
hkey=key%TABLE_SIZE;
for(i=0;i<TABLE_SIZE;i++)
{
index=(hkey+i)%TABLE_SIZE;
if(h[index] == NULL)
{
h[index]=key;
break;
}
}
if(i == TABLE_SIZE)
printf("\nElement cannot be inserted!\n");
}
void search()
{
int key,index,i,flag=0,hkey;
printf("Enter search element: ");
scanf("%d",&key);
hkey=key%TABLE_SIZE;
for(i=0;i<TABLE_SIZE; i++)
{
index=(hkey+i)%TABLE_SIZE;
if(h[index]==key)
{
printf("Value is found at index: %d",index);
break;
}
}
if(i == TABLE_SIZE)
printf("Value is not found!");
}
void display()
{
int i;
printf("\nElements in the hash table are:");
for(i=0;i< TABLE_SIZE; i++)
printf("\nAt Index: %d \t Value: %d",i,h[i]);
}
main()
{
int opt,i;
while(1)
{
printf("\n1.Insert\n2.Display\n3.Search\n4.Exit\nEnter the choice: ");
scanf("%d",&opt);
switch(opt)
{
case 1:
insert();
break;
case 2:
display();
break;
case 3:
search();
break;
case 4:
exit(0);
}
}
}
/*OUTPUT:






RESULT:

Thus the C program is written and verified for linear probing successfully.*/
