/*Ex.no:6 IMPLEMENTATION OF BINARY SEARCH TREES

AIM:
To implement the operations in Binary Search Tree using C.
ALGORITHM:
1: Create the binary search tree
2: Declare all the functions with which operations are done on the Binary search tree.
3: Display the menu with list of operations and perform the operation selected by the user on
the Binary search tree.
4: Operations
Insert – to insert an element into the Binary search tree
Delete - to delete an element from the Binary search tree
Display – to display the elements of the Binary search tree
Search – to search an element from the Binary search tree
exit – to exit from the program

PROGRAM:*/
#include<stdio.h>
int main()
{
int c, first, last, middle, n, search, array[100];
printf("Enter number of elements:\n");
scanf("%d",&n);
printf("Enter %d integers:\n", n);
for (c = 0; c < n; c++)
scanf("%d",&array[c]);
printf("Enter the value to find:\n");
scanf("%d", &search);
first = 0;
last = n - 1;
middle = (first+last)/2;
while (first <= last) {

if (array[middle] < search)
first = middle + 1;
else if (array[middle] == search) {
printf("%d is present at index %d.\n", search, middle+1);
break;
}
else
last = middle - 1;
middle = (first + last)/2;
}
if (first > last)
printf("Not found! %d is not present in the list.\n", search);
return 0;
}
/*Output

Result
Thus, the program to implement the operations in Binary Search Tree in C was executed
successfully.*/
