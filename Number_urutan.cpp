#include <stdio.h>

int main()
{
	int i,j,p,q,k,l,m,o,t,n,input[100001],max,count[100001];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(o=0;o<=100001;o++)
		{
			count[o]=0;
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&input[j]);
			count[input[j]]++;
		}
		printf("Case #%d:\n",i+1);
		for(m=0;m<=100001;m++)
		{
			if(count[m]==0)
			{
				continue;
			}else
			{
				printf("%d %d\n",m, count[m]);
			}
		}

	}
	return 0;
}
		
