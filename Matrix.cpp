#include <stdio.h>

int main()
{
	int i,j,k,t,N,a,m,M,n,b,c,max[100],max1[100];
	int matrix[100][100];
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d",&N);

		for(j=0;j<N;j++)
		{
			for(k=0;k<N;k++)
			{
				scanf("%d",&matrix[j][k]);
			}
		}
		for(m=0;m<N;m++)
		{
			max1[m]=matrix[m][0];
			for(a=0;a<N;a++)
			{
				if(matrix[m][a]>max1[m])
				{
					max1[m]=matrix[m][a];
				} else continue;
			}
		}
		for(b=0;b<N;b++)
		{
			max[b]=matrix[0][b];
			for(c=0;c<N;c++)
			{
				if(matrix[c][b]>max[b])
				{
					max[b]=matrix[c][b];
				} else continue;
			}
		}
		printf("Case #%d:\n", i+1);
		printf("Row :");
		for(m=0;m<N;m++)
		{
			printf(" %d",max1[m]);
		}
		printf("\n");
		printf("Col :");
		for(n=0;n<N;n++)
		{
			printf(" %d",max[n]);
		}
		printf("\n");
	}
	return 0;
}
