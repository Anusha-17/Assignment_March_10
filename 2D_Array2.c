#include<stdio.h>
#define ROW 2
#define COL 3
void main()
{
	int arr[ROW][COL],i,j;
	for(i=0;i<ROW;i++)
	{
		printf("%p\n",arr[i]); // printing starting address of the row
		for(j=0;j<COL;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Printing the elements:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%d\t",arr[i][j]);
		}
}
}
