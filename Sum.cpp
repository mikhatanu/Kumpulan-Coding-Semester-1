#include <stdio.h>

int main()
{
	int l,t,i,n,q,a[100001],b,k=0,e,c,d=0,z,x;
	long long int hasil=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&q);	
		for(c=1;c<=n;c++)
		{
			scanf("%d",&a[c]);
		}
		for(k=0;k<q;k++)
		{		
			scanf("%d %d",&b,&e);
			for(d=b;d<=e;d++)
			{
				hasil=hasil+a[d];
			}
			printf("%lld\n",hasil);		
			hasil=0;	
		}
	}
	return 0;
}
