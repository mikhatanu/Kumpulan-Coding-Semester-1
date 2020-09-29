 #include <stdio.h>

int main()
{
    long int k=0,j,t;
    long int n;
 	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%ld",&n);
		printf("Case #%d: ",j+1);
		k=(n/4)+(n/400)-(n/100);
		printf("%ld\n",k);
	}
	return 0;
}
