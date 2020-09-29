#include <stdio.h>

int main()
{
    int N,T,i,j,k; 
	int primes[T+1];
	scanf("%d",&N);
	for(k=0;k<N;k++)
	{
		scanf("&d",&T);
		printf("Case #%d:\n",k+1);
    	for(i = 2; i<=T; i++)
        primes[i] = i;

	    i = 2;
	    while ((i*i) <= T)
	    {
	        if (primes[i] != 0)
	        {
	            for(j=2; j<T; j++)
	            {
	                if (primes[i]*j > T)
	                    break;
	                else
	                    primes[primes[i]*j]=0;
	            }
	        }
	        i++;
	    }
	
	    for(i = 2; i<=T; i++)
	    {
	        if (primes[i]!=0)
	            printf("I will become a good boy.\n");
	    }
	}
	    return 0;
}
