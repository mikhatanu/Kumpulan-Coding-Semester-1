#include <stdio.h>

int main()
{
	long int i,t,l,n,m,o=0,temp1;
	long int k=0;
	int button[19];
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d",&n);	
		for(m=0;m<n;m++)
		{	
			scanf("%d",&button[m]);
		}
		for(l=0;l<n;l++)
		{
			printf("%d",button[l]);
		}
	}
	return 0;
}
