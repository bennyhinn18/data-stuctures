/*Ex.no:12				SELECTION SORT

Aim :
To arrange the numbers in ascending order using selection sort.
ALGORITHM:
1: Set max_pos to location 0
2: Search the maximum element in the list
3: Swap with value at location max_pos
4: Increment max_pos to point to the next element
5: Repeat until list is sorted
PROGRAM*/
#include<stdio.h>
void main()
{
int i, j, temp, n, a[10];
printf("Enter the value of N \n");
scanf("%d", &n);
printf("Enter the numbers \n");
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for (i = 0; i < n; i++)
{
for (j = i + 1; j < n; j++)
{
if (a[i] > a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
printf("The numbers arranged in ascending order are given below \n");
for (i = 0; i < n; i++)
printf("%d\n", a[i]);
printf("The numbers arranged in descending order are given below \n");
for(i=n-1;i>=0;i--)
printf("%d\n",a[i]);
getch();
}
/*OUTPUT:


RESULT:

Thus, the program to implement the selection sort algorithm in C was executed successfully.*/
