#include <stdio.h>
void main()
{
  int test[2][3][2]={{1,2,3,4},{4,5,6,7}};
  int i,j,k;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      for (k = 0; k < 2; k++)
      {
        printf("test[%d][%d][%d] = %d\n", i,j,k,test[i][j][k]);
      }
    }
  }
}
