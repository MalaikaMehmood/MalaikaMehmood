#include<stdio.h>
int main()
{
int m[5];
printf("element of array\n");
for(int i=0;i<5;i++)
for(int j=0;j<5;j++)
{
scanf("%d",&m[i]);
}
	for(int j=5-1;j>=0;j--)
	{
		printf("%d\t",m[j]);
	}
	printf("\n");
}
