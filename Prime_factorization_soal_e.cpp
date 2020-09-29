#include <stdio.h>

int main()
{
	int i,t,n,num=1;
	scanf("%d",t);
	for(a=0;a<t;a++)
	{
		scanf("%d",n);
		for(b=n;b>0;b--)
		{
			num=num*b;
		}
		for(i=2; i<=num; i++)
   		{
        /* Check 'i' for factor of num */
        	if(num%i==0)
        	{
            /* Check 'i' for Prime */
        	    isPrime = 1;
        	    for(j=2; j<=i/2; j++)
        	    {
        	        if(i%j==0)
        	        {
        	            isPrime = 0;
       	            	break;
       	       		}
       			}
            /* If 'i' is Prime number and factor of num */
            	if(isPrime==1)
           		{
               		printf("%d, ", i);
            	}
        }
    }
}
	}
	
	
	


