#include <stdio.h>
int main()
{
  int m, n, p, c, d, k, sum = 0;
  int matrix[10][10], transpose[10][10], product[10][10];

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of matrix\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);
//to find transpose of the matrix
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
//to find inverse of matrix
  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      for (k = 0; k < n; k++)
      {
        sum = sum + matrix[c][k]*transpose[k][d];
      }

      product[c][d] = sum;
      sum = 0;
    }
  }

  for (c = 0; c < m; c++)
  {
    for (d = 0; d < m; d++)
    {
      if (c == d)
      {
        if (product[c][d] != 1)
          break;
      }
      else
      {
        if (product[c][d] != 0)
          break;
      }
    }
    if (d != m)
      break;
  }
  if (c != m)
    printf("The matrix isn't orthogonal.\n");
  else
    printf("The matrix is orthogonal.\n");

  return 0;
}





















//functions are executed in the order in which they are called but not the order in which they are defined 
//main function can be defined anywhere in the program. Execution starts at main irrespective of wherever it is defined
//you can only defined main but we cannot call main operating system calls main function the moment we run the program
//PRE defined function:- it is already predefined function in the system so we need to ust call the function. we need to include a suitable header file. Before alling iN
//EXAMPLe:-scanf(), printf(), 
//if function contains no return statement then return type is void.
//there can be multiple return statements
//return value is typecasted when the type is different is from return type. The value returned is returned to the function 
//expression is evaluated and result is returned to the function call.
//Function f1 returns ten and next two statements are skipped
//