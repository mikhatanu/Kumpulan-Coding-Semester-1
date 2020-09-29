#include <stdio.h>

int main()
{
	int k,i,j,n,binus[102],lawan[102],poin=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&binus[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&lawan[j]);
	}
	for(k=0;k<n;k++)
	{
		if(binus[k]>lawan[k])
		{
			poin=poin+3;
		}else if(binus[k]==lawan[k])
		{
			poin=poin+1;
		}
	}
	printf("%d\n",poin);
}
