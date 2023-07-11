#include<stdio.h>
int input(int m[] ,int a)
{
	printf("enter 10 numbers\n");
	for(int i=0;i<9;i++)
	{
		scanf("%d",&m[i]);
	}
}
int linearsearch(int m[],int n,int numsearch)
{
	for(int i=0;i<n;i++)
	{
		if(m[i]==numsearch)
		return i;
	}
	return -1;
	}
int main()
{
	int m[10];
	input(m,10);
	int numsearch;
	scanf("%d",&numsearch);
	int index=linearsearch(m,10,numsearch);
	if(index==-1)
	{
		printf("%d is not found",numsearch);
	}
	else
	printf("%d is found%d",numsearch,index);
}
