#include<stdio.h>
int main()
{
	int a[5],b[5];
	printf("enter number\n");
	for(int j=0;j<5;j++)
	{
		scanf("%d",&b[j]);
	}

	for(int i=0;i<5;i++)
	{
		if(a[i]==b[5])
		{
			printf("%d\n",a[i]);
		}
		else
		{
		printf("not find");
	}
	}
}
