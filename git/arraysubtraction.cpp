#include<stdio.h>
int input(int m[][4],int n[][4],int r)
{
	printf("enlemenet of 1 ");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
		printf("enlemenet of 2 ");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&n[i][j]);
		}
		printf("\n");
	}
}
int sub(int m[][4],int n[][4],int c)
{
	int l,i,j;
	for( i=0;i<c;i++)
	{
		
		for( j=0;j<4;j++)
		{
		l[3][4]=m[i][j]-n[i][j];
		}
		printf("\n");
	}
	printf("the res is %d",l[3][4]);	
}
int main()
{
	int r,c;
	int m[r][4],n[c][4];
	printf("row and row of 1 and 2");
	scanf("%d\n%d",&r,&c);
	input(m,n,r);
	sub(m,n,c);
}
