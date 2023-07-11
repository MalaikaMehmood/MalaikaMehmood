#include<stdio.h>

 int main()
{
	int r,c,a[3][4],max;
	printf("plz enter the numbers");
	for(r=0;r<3;r++)
	for(c=0;c<4;c++)
	scanf("%d",&a[r][c]);
	max=a[0][0];
	for(r=0;r<3;r++)
	for(c=0;c<4;c++)
	if(a[r][c]>max)
	max=a[r][c];
	printf("\n the large number is %d",max);
}
