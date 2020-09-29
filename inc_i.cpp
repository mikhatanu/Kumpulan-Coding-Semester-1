#include <stdio.h>
#include <string.h>

int main(){
	int n,j,k,i,flag=0,hasil[256];
	char s[100000],t[100000];
	scanf("%d",&n);
	scanf("%s",s); getchar();
	scanf("%s",t); getchar();
//	printf("%c\n%c",s[1],t[1]);
//	validasi[s[0]]=5;
//	printf("%d",validasi[s[0]]);
	for(int z=0;z<256;z++)
	{
		hasil[z]=0;
		
	}
	for(i=0;i<n;i++)
	{
		if(s[i]-t[i]!=0)
		{
			hasil[s[i]]++;
			hasil[t[i]]++;
		}else
		{
			hasil[s[i]]++;
		}
	}
	for(j=97;j<123;j++)
	{
		if(flag<hasil[j])
		{
			flag=hasil[j];
		}
//			else
//			{
//				flag=hasil[j];
//			}
		
	}
	printf("%d\n",flag);
}
