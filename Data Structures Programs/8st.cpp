// Program for implementing insertion sort.

#include <stdio.h>
#include <conio.h>
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
for(i = 0; i < num; i++)
{
temp = arr[i];
j = i;
while(j > 0 && temp < arr[j-1])
{
arr[j] = arr[j-1];
j = j-1;
}
arr[j] = temp;
}
printf("\nThe array sorted in ascending order is as follows.\n");
for(i = 0; i < num; i++)
{
printf("%d ", arr[i]);
}
getch();
}

