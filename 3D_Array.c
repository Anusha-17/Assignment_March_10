#include <stdio.h>
void main()
{
  int test[2][3][2],i,j,k;
  printf("Enter 12 values: \n");

  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        scanf("%d", &test[i][j][k]);
      }
    }
  }
  printf("\nDisplaying values:\n");
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
      }
    }
  }
  printf("\nFirst element of array:a[0][0][0]=%d\n",test[0][0][0]);
  printf("Middle element of array:a[0][2][0]=%d\n",test[0][2][0]);
  printf("Last element of array:a[1][2][1]=%d\n",test[1][2][1]);
}
