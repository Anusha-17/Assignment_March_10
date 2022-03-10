#include<stdio.h>
#define rows 2
#define col 3
void main()
{
	int a[2][3]={10,20,30,40,50,60};//method - 1
	int b[2][3]={{100,200,300},{400,500,600}};//method-2
	printf("%d\n",a[0][1]); // accessing 0th row and 1st column
	printf("%d\n",b[1][0]);  // accessing 1st row and 0th column
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("&a[%d][%d]=%p, Value is=%d\n",i,j,&a[i][j],a[i][j]);
		}
	}
	printf("Base address of the array=%p, address of first element =%p\n",a,&a[0][0]);
}
