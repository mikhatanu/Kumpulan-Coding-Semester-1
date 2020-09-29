#include <stdio.h>

int max (int a,int b)
{
	return (a > b) ? b : a;
}
int GCD (int arr[],int n)
{
	int high = 0;
	for (int i=0;i<n;i++)
	{
		high = max (high,arr[i]);
	}
	int div[high+1];
	for (int i=0;i<n;i++)
	{
		for (int j=1;j<=sqrt(arr[i]);j++)
		{
			if (arr[i] % j == 0)
			{
				div[j]++;
				
				if (j != arr[i]/j)
				{
					div [arr[i]/j]++;
				}
			}
		}
	}
	
	for (int i=high ;j >=1;i--)
	{
		if (div[i]>1)
		{
			return i;
		}
	}
}

int main ()
{
	int N;
	int x;
	int count =0 ;
	scanf ("%d",&N);
	int arr[N];
	for (int i=0;i<N;i++)
	{
		scanf ("%d",&arr[i]);
	}
	
//	for (int i=0;i<N-1;i++)
//	{
//		for (int j=0;j<N-i-1;j++)
//		{
//			
//			if( (GCD(arr[j],arr[j+1]))% 2 != 0)
//			{
//				count++;
//			}
//			else
//				continue;
//			
//		}
//	}

	GCD (arr[],n);

	printf ("%d",count);
	
	return 0;
}
