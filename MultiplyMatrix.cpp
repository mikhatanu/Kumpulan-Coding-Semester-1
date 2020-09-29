#include <stdio.h>

int main()
{
	unsigned long long int t,i,n,matrix[31][31],result[31][31],j,k,l,c,d,b,x,z,a=0,sum=0;
	scanf("%d",&t);
	for(x=0;x<31;x++)
	{
		for(z=0;z<31;z++)
		{
			matrix[x][z]=0;
			result[x][z]=0;
		}
	}
	for (i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",&matrix[j][k]);
			}
		}
		printf("Case #%d:\n",i+1);
			for(c=0;c<n;c++)
       		{
    	        for(d=0;d<n;d++)
    	        {
       	        	for (l=0;l<n;l++)
       	       		{
       		            sum += (matrix[c][l]*matrix[l][d])%1000000007;
                	}
                	result[c][d] = sum ;
                	sum = 0;
            	}
       		}
        
        for ( int j = 0 ; j < n ; j++ ) {
            for ( int k = 0 ; k < n ; k++ ) {
				if(a==n)
				{
					printf("\n");
					a=0;
				}
				printf("%d ",result[j][k]);
                result[j][k] = 0;
                a++;
            }
        } 
		printf("\n");
	}
	return 0;
}
