#include <stdio.h>
#include <string.h>

int main()
{
	int counter=0;
	char input[255];
	char vowel[]={"AaOoYyEeUuIi"};
	scanf("%s",input);
	for(int i=0;i<strlen(input);i++)
	{
		for(int j=0;j<strlen(vowel);j++)
		{
			if(strcmp(input[i],vowel[j])==0)
			{
				counter++;
				break;
			}else
			{
				continue;
			}
			
		}
		if(counter==1)
		{
			printf(".%c",input[i]);
		}
		counter=0;
	}
}
