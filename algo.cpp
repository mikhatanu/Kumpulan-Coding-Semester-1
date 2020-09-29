#include <stdio.h>
#include <string.h>
int main()
{
	char sentence[101],line[100],word[100],type[100];
	char input [11][101];
	int i,j=0,k=0,count=0;
	scanf("%[^\n]",sentence);
//	printf("%s\n",sentence);
	for(i=0;i<strlen(sentence);i++)
	{
		if(sentence[i]!=' ' && sentence[i]!='.' && sentence[i]!='\0')
		{
			input[j][k]=sentence[i];
			k++;
		}
		else if(sentence[i]==' ' || sentence[i]=='.')
		{
			input[j][k]='\0';
			k=0;
			j++;
			count++;
		}
	}
	FILE *fp;
	fp = fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("File doesn't exist!\n");
		return 1;
	}
	while(fgets(line,100,fp)!=NULL)
	{
		sscanf(line,"%s %s",word,type);
		//tinggal compare cari katanya di kbbi guys
	}
	return 0;
}
