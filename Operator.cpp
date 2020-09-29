#include<stdio.h>

int main()
{
	int n;
	char a,b,c,temp;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf(" %c %c %c",&a,&b,&c);
		printf("Case #%d: ",i);
			if(a>b)
			{
				temp=a;
				a=b;
				b=temp;
			}
			if(b>c)
			{
				temp=b;
				b=c;
				c=temp;
			}
			if(a>b)
			{
				temp=a;
				a=b;
				b=temp;
			}
			printf("%c %c %c\n",a,b,c);
	}
		return 0;
}
