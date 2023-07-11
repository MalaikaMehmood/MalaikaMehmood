#include<stdio.h>
int input(int m[][4],int[][4],int n)
{
	printf("enter elemnets for first array\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&m[i][j]);
			
		}
	}
	printf("enter element for second array\n");
	{
			for(int i=0;i<n;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&n[i][j]);
			
		}
	}
		
	}	
}
int sub(int m[][4],int n[][4],int n)
{
	int l[i][j];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<4;j++)
		{
		 l[i][j]=m[i][j]-n[i][j];
		}
		printf("\n");
	}
	printf("the result is %d",l[i][j]);
}
int main()
{
	int r,s;
	int m[r][4],n[n][4];
	printf("enter the number of rows 1\n");
	scanf("%d",&r);
	printf("enter the number of rows 2\n");
	scanf("%d",&s);
	input(m,n,r);
	sub(m,n,s);
}
