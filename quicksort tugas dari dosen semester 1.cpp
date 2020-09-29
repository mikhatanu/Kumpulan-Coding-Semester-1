#include <stdio.h>
#include <string.h>

char arr[255][255];

int partition(int low, int high)
{
	char temp[255];
	char pivot[255];
	strcpy(pivot,arr[high]);
	int i=(low-1);
	for(int j=low;j<=high-1;j++)
	{
		if(strcmp(arr[j],pivot)<0||strcmp(arr[j],pivot)==0)
		{
			i++;
			strcpy(temp,arr[i]);
			strcpy(arr[i],arr[j]);
			strcpy(arr[j],temp);		
		}


	}
	strcpy(temp,arr[i+1]);
	strcpy(arr[i+1],arr[high]);
	strcpy(arr[high],temp);
	return(i+1);
}

void quickSort(int low, int high)
{
	if(low<high)
	{
		int pi=partition(low,high);
		
		quickSort(low,pi-1);
		quickSort(pi+1,high);
	}
}

int main()
{
	char input [255];
	int i=0;
	FILE *fp;
	fp = fopen("stringcth.txt","r");
	while(!NULL)
	{
		i++;
		fscanf(fp,"%s:\n",arr[i]);
	}
	fclose(fp);
	quickSort(1,i);
	for(int j=0;j<=i;j++)
	{
		printf("%s",arr[j]);
	}
}
