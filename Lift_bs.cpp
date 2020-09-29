#include<stdio.h>
int main()
{
	int lantai;
	int n,t,k,a[100],j,i,total=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		for(j=0;j<20;j++) 
		{
			a[j]=0;
		}
		scanf("%d",&n);
		for(k=0;k<n;k++)
		{
			scanf("%d",&lantai);
		
		if(a[lantai-1]==1 || a[lantai+1]==1)
		{
			a[lantai]=0;
		} else {
		a[lantai]=1;	};
		}
		for(k=0;k<20;k++)
		{
			if(a[k]==1)
			{
				total++;
			}
		}
		
		printf("Case #%d: %d\n",i,total);
	total = 0;
	}
	return 0;
}

