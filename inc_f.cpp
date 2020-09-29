#include <stdio.h>

int main()
{
	int n,k,arr[10000],total=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=1;j<n;j++)
	{
		total=total+arr[j];
	}
	if((total-arr[0])%2!=0)
	{
		printf("John\n");
	}else
	{
		printf("Preston\n");
	}
}
