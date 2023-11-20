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
#include&lt;stdio.h&gt;
int main()
{
int c, first, last, middle, n, search, array[100];
printf(&quot;Enter number of elements:\n&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;Enter %d integers:\n&quot;, n);
for (c = 0; c &lt; n; c++)
scanf(&quot;%d&quot;,&amp;array[c]);
printf(&quot;Enter the value to find:\n&quot;);
scanf(&quot;%d&quot;, &amp;search);
first = 0;
last = n - 1;
middle = (first+last)/2;
while (first &lt;= last) {

if (array[middle] &lt; search)
first = middle + 1;
else if (array[middle] == search) {
printf(&quot;%d is present at index %d.\n&quot;, search, middle+1);
break;
}
else
last = middle - 1;
middle = (first + last)/2;
}
if (first &gt; last)
printf(&quot;Not found! %d is not present in the list.\n&quot;, search);
return 0;
getch();
}
/*Output

Result
Thus, the program to implement the operations in Binary Search Tree in C was executed
successfully.*/
