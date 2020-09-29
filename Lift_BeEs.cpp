#include <stdio.h>

int main()
{
	int i,j,t,l,n,m,z,temp1=0;
	int k=0;
	int button[19];
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		for(z=0;z<20;z++)
		{
			button[z]=0;
		}
		k=0;
		scanf("%d",&n);	
		for(m=0;m<n;m++)
		{	
			scanf("%d",&button[m]);
		}
		for(j=0;j<n;j++)
		{
			temp1=button[j]-button[0];
			if(temp1!=1||temp1!=-1)
			{				
				k++;
			}else{continue;
			}
		}
		printf("Case #%d: ", i+1);
		printf("%d\n",k-1);
	}
	return 0;
}
