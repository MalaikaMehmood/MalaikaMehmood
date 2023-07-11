#include<stdio.h>
int common(int m[],int b[],int c[])
{
for(int i=0;i<4;i++)
{
	if(m[i]&&b[i]==c[i])
	{
		return i;
	}
	else
	return -1;
}
}
int main()
{
	int arr1[]={2,3,7,6,9};
	int arr2[]={3,5,7,9,10};
	int arr3[3];
	int index=common(arr1,arr2,arr3);
	int occ=0;
	for(int i=0;i<4;i++)
{
	if(index==-1)
	occ++;
	else
	printf("%d",arr3[i]);
}
}
