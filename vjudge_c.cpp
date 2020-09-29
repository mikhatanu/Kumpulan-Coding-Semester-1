#include <stdio.h>
#include <string.h>

int main(){
	unsigned int n,i,jumlah;
	char input[255];
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",input);
			jumlah=strlen(input);
			if(strlen(input)<=10)
			{
				printf("%s\n", input);
			}else
			{
				printf("%c%d%c\n", input[0], jumlah-2, input[jumlah-1]);
			}
			jumlah = 0;
		}
	return 0;
}
