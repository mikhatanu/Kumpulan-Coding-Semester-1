#include <stdio.h>

int main()
{
	int i,t,x,y,z,m,n,p,j,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d %d %d %d", &x,&y,&z,&m,&n,&p);
		j=0;
		b=0;
		b=((x*(m-1))+(y*(n-1)))/(m-n);
		j=b*m-(x*(m-1));
		if(j+z==p*(b+z))
		{
			printf("Case #%d: YES\n",i+1);
		}
		else
		{
			printf("Case #%d: NO\n",i+1);
		}
	}
	return 0;
}
