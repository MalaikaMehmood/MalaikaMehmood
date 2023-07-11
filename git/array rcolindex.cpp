#include<stdio.h>
int main()
{
	int r,c,index;
	printf("enter row and col");
	scanf("%d\n%d",&r,&c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			index=i*(c-1)+j;
		}
	}
	printf("%d is the index",index);
}

