#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int t,i,k,l,j,temp[33],hasil;
	char input[33];
	scanf("%d",&t);
	for(k=0;k<33;k++)
	{
		temp[k]=0;
	}
	for(i=0;i<t;i++)
	{
		hasil=0;
		scanf("%s",input);
		for(j=0;j<=strlen(input);j++)
		{
			if(input[j]=='1')
			{
				temp[j]=pow(2,(strlen(input)-1)-j);
				continue;
			}
			if(input[j]=='0'||input[j]=='('||input[j]==')')
			{
				continue;
			}
			if(input[j]=='-')
			{
				temp[j]=-pow(2,(strlen(input)-1)-j);
				j++;
				continue;
			}
		}
		for(l=0;l<strlen(input);l++)
		{
			hasil=hasil+temp[l];
		}
		printf("Case #%d: %d\n",i+1,hasil);
	}
}
