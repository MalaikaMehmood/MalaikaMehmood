#include<stdio.h>
int main()
{
	int m[10],rev=0;
	printf("enter array\n");
	for(int i=0;i<9;i++)
	{
		scanf("%d",&m[i]);
	}
	for(int i=0;i<9;i++)
	{
		int d=m[i]%10;
		m[i]=m[i]/10;
		rev=(rev*10)+d;
	}
	if(m[10]==rev)
	{
		printf("it is pailndrop");
	}
	else
	printf("it is not pailndrop");
}


