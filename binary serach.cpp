#include <stdio.h>

int main()
{
	int key,high=9,low=0,arr[]={1,2,3,4,5,6,7,8,9,10};
	bool flag=0;
	int middle=5;
	
	scanf("%d",&key);
	while(flag==0)
	{
		if(key<arr[middle])
		{
			high=middle-1;
			middle=(low+high)/2;
		}
		if(key==arr[middle])
		{
			printf("%d",key);
			flag=1;
		}
		if(key>arr[middle])
		{
			low=middle+1;
			middle=(low+high)/2;
		}if(low==high&&key!=arr[high])
		{
			printf("Data not found!");
			break;
		}
	}
}

