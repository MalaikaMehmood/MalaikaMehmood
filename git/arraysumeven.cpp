#include<stdio.h>
int main()
{
	int m[6]={3,5,7,8,9,2};
		int total=0;
	for(int i=0;i<6;i++)
	{
		if(m[i]%2==0)
		{
		total=total+m[i];
	}
}
	printf("%d is the sum",total);
}

