#include <stdio.h>
int main()
{
	int i,j,t,count=0,number,temp;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		count = 0;
		scanf("%d",&number);
		temp=number;
		for(i=1; i <= 10000; i++)
	    {
	        if (temp%i == 0)
	        {
				if(temp/i>=i)
				{
					if(temp/i==i)
					{
						count++;
					}
				else{count+=2;}
				}
			}
	        }	
		printf("Case #%d: %d\n",j+1,count);
	}
}


