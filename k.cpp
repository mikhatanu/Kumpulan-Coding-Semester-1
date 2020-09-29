#include <stdio.h>
#include <math.h>


int GCD (int a,int b)
{
	while (a != b)
	{
		if (a > b)
		{
			return GCD(a-b,b);
		}
		else
			return GCD(a,b-a);
	}
}

int main ()
{
	int N;
	int x;
	int count =0 ;
	scanf ("%d",&N);
	int arr[1000001];
	for (int i=0;i<N;i++)
	{
		scanf ("%d",&arr[i]);
	}
	
	for (int i=0;i<N-1;i++)
	{
		for (int j=0;j<N-i-1;j++)
		{
			
			if( (GCD(arr[j],arr[j+1]))% 2 != 0)
			{
				count++;
			}
			else
				continue;
			
		}
	}

//	count = GCD (&arr[N],N);

	printf ("%d",count);
	
	return 0;
}
