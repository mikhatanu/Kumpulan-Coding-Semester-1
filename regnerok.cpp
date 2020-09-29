#include <stdio.h>

int main()
{
	int t,i,j,k,jarak,teman[1002],level=0,jumlah=0,max=0,min;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		max=0;
		min=999999999;
		scanf("%d %d",&jumlah,&level);
		teman[0]=0;
		for(j=1;j<=jumlah;j++)
		{
			scanf("%d",&teman[j]);
			if(teman[j]>max)
			{
				max=teman[j];
			}
			if(teman[j]<min)
			{
				min=teman[j];
			}
		}
		printf("Case #%d: ",i+1);
		jarak=max-min;
		if(jarak<level)
		{
			printf("YES");
		}else 
		{
			printf("NO");
		}
		printf("\n");
	}
	return 0;
}
