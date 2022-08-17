// Implement linear search using one and two dimensional array.

#include<stdio.h>
int main(){
  int rows, columns, srchElement, count=0;
  //enter the order of matrix
  printf("Enter the number of Row and Column: \n");
  scanf("%d %d", &rows, &columns);
  //create a 2D array of the same order
  int array[rows][columns];
  //Take inputs into the 2D array
  printf("Enter %d elements: \n", (rows*columns));
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      scanf("%d", &array[i][j]);
    }
  }
  //Enter the search element
  printf("Enter the element to get the position: \n");
  scanf("%d", &srchElement);

  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(array[i][j] == srchElement){
        printf("(%d, %d) \n", i, j);
        count++;
      }
    }
  }
  if(count==0)
    printf("Not found \n");

  return 0;
}