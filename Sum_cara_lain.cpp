#include <stdio.h>

int main()
{
	unsigned int l,t,i,n,q,a[100000],b,k=0,e,c,d=0,z,x,hasil=0,input;
	scanf("%d",&t);
	t<10;
	n<=100000;
	a[100000]<=100000;
	q<=1000;
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&q);	
		for(c=0;c<n;c++)
		{
			scanf("%d",&a[c]);
		}
		for(l=0;l<q;l++)
		{
		do
		{		
			scanf("%d %d",&b,&e);
		for (z=0;z<n;z++)
		{
			if(b==a[z])
					{
						for(x=0;x<n;x++)
						{
							if(e==a[x])
							{
								input=1;
							}
						}
					}
		}
		}while(input!=1);
		d=b;
		for(d;d<=e;d++)
		{
			hasil=hasil+d;
		}		
			printf("%d\n",hasil);
			hasil = 0;
			k++;
		}
	}
	return 0;
}
