#include <stdio.h>

int main(){
	int n;
	int k;
	float j[102];
	int counter=0;
	scanf("%d %d",&n,&k);	
		for(int i=0;i<n;i++)
		{
			scanf("%f",&j[i]);
		}
		if (j[k-1]<=0)
		{
			printf("%d\n",counter);
		}else
		{
		for (int z=0;z<n;z++)
		{
			if(j[z]>=j[k-1])
			{
				counter=counter+1;
			}else 
			{
				continue;
			}
		}
		printf("%d\n",counter);
			
		}
	return 0;
}
