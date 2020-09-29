#include <stdio.h>

int main()
{
	int n,flag=0,input,count=0;
	int array[101];
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&input);
			if(input==1)
			{
				count++;
			}
		}
		if(count>1)
		{
			flag++;
		}
		count=0;
	}
	printf("%d\n",flag);
	return 0;
}
