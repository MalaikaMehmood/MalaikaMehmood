#include<stdio.h>
int main()
{
int a[5];
printf("enter ten number\n");
for(int i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
for(int i=0;i<5;i++)
{

	if(a[0]<a[i])
	{
		a[0]=a[i];
	}
}
printf("the max is %d",a[0]);
}

