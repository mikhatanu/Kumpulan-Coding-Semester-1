#include <stdio.h>
int main()
{
    int T,N,i,j;
	scanf("%d",&T);
    for (i=0;i<T;i++)
    {
	    scanf("%d",&N);
		printf("Case #%d:\n", T);
		for(j=1; j <= N; j++)
    {
  	    if (N%j == 0)
		{
				if(j!=N&j!=1)
        	{	
				printf("I will become a good boy.\n");
        	}
    	}
	}
	}
    return 0;
}
