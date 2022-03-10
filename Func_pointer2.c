#include<stdio.h>

int* f1(int *a)
{
	return a;
}

int* f2(int *a)
{
	return a;
}

int* f3(int *a)
{
	return a;
}

int* f4(int *a)
{
	return a;
}

int* f5(int *a)
{
	return a;
}

int main()
{
	int* (*f_ptr[5])(int*)={f1,f2,f3,f4,f5};
	long a,i;
	printf("Enter a:\n");
	scanf("%d",&a);
	int *y;
	y=a;
	for(i=0;i<4;i++)
	{
		y=f_ptr[i](y);
		printf("%p\n",&y);
	}
	return 0;
}
