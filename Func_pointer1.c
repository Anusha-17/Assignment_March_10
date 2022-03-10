#include<stdio.h>
void f1(int a,int b)
{
	printf("\nFunction 1!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

void f2(int a,int b)
{
	printf("\nFunction 2!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

void f3(int a,int b)
{
	printf("\nFunction 3!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

void f4(int a,int b)
{
	printf("\nFunction 4!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

void f5(int a,int b)
{
	printf("\nFunction 5!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

void f6(int a,int b)
{
	printf("\nFunction 6!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

void f7(int a,int b)
{
	printf("\nFunction 7!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

void f8(int a,int b)
{
	printf("\nTunction 8!");
	printf("\nthe values of two integers are %d, %d",a,b);
}

void f9(int a,int b)
{
	printf("\nFunction 9!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

void f10(int a,int b)
{
	printf("\nFunction 10!");
	printf("\nThe values of two integers are %d, %d",a,b);
}

int main()
{
	void (*f_ptr[10])(int,int)={f1,f2,f3,f4,f5,f6,f7,f8,f9,f10};
	int i;
	for(i=0;i<10;i++)
	{
		(*f_ptr[i])(i+1,i+11);
	}
	return 0;
}
