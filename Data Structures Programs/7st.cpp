// Program for implementing selection sort.

#include <stdio.h>
void main()
{
int arr[50], num, i, j, pos, temp;
printf("Enter the number of elements in the array: ");
scanf("%d", &num);
printf("\nEnter the numbers: ");
for(i = 0; i < num; i++)
{
scanf("%d", &arr[i]);
}
for(i = 0;i < (num - 1); i++)
{
pos = i;
for(j = i + 1; j < num; j++)
{
if (arr[pos] > arr[j])
pos = j;
}
if(pos != i)
{
temp = arr[i];
arr[i] = arr[pos];
arr[pos] = temp;
}
}
printf("\nThe array sorted in ascending order is as follows.\n");
for(i = 0; i < num; i++)
printf("%d ", arr[i]);
}