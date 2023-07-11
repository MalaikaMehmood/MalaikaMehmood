#include<stdio.h>
int input(int m[],int n)
{
	for(int i=0;i<5;i++)
	{
		scanf("%d",&m[i]);
	}
}
int occurence(int m[],int n,int occ=0)
{
	for(int i=0;i<n;i++)
	{
		if(m[i]==5)
		{
			occ++;
		}
	}
	printf("the number occured%d\ntime",occ);
	}
int main()
{
	int n,m[n];
	printf(" enter size of array");
	scanf("%d",&n);
	input(m,5);
	occurence(m,5,0);
}

