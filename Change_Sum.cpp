#include <stdio.h>

int main()
{
	long unsigned int k,j,n,reversed1=0,reversed2=0,sisa1,sisa2;
	int i,t;
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%lu",&n);
		printf("Case #%d: ", i+1);
		printf("%lu ",n);
		k=n;
		while(k!=0)   
   		{
        sisa1 = k%10;
        reversed1 = reversed1*10 + sisa1;
        k=k/10;
   		}
   		printf("%lu ",reversed1);
   		j=(reversed1+n);
 		while(j!=0)   
   		{
		sisa2 = j%10;
        reversed2 = reversed2*10 + sisa2;
        j =j/10;
   		}  		
   		printf("%lu ",reversed1+n);
   		printf("%lu\n",reversed2);fflush(stdin);
   		reversed1=0;
   		reversed2=0;
	}
	return 0;
}
