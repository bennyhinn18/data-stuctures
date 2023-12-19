/*Ex.no:11				LINEAR SEARCH

AIM:
To implement the Linear search algorithm using C.
ALGORITHM:
1: Read the search element from the user
2: Compare, the search element with the first element in the list.
3: If both are matching, then display "Given element found!!!" and terminate the function
4: If both are not matching, then compare search element with the next element in the list
sequentially.
5: Repeat steps 3 and 4 until the search element is compared with the last element in the list.
6: If the last element in the list is also doesn't match, then display "Element not found!!!" and
terminate the function.
PROGRAM*/
#include<stdio.h>
void main() {
int a[10],i,n,m,c=0;
printf("Enter the size of an array: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
printf("Enter the number to be searched: ");
scanf("%d",&m);
for(i=0;i<=n-1;i++)
{
if(a[i]==m)
{
printf("Element is in the position %d\n",i+1);
c=1;
break;
}
}
if(c==0)
printf("The number is not in the list");
getch();
}

OUTPUT:

/*
RESULT:

Thus, the program to implement the Linear Search algorithm in C was executed successfully.*/
