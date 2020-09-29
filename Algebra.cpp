#include <stdio.h>

int main()
{
	float a1,a2,c1,b1,b2,c2;
	float y=0,x=0;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f %f",&a1,&b1,&c1);
		scanf("%f %f %f",&a2,&b2,&c2);
		y+=((c1*a2)-(c2*a1))/((b1*a2)-(b2*a1));
		x+=(c1-(y*b1))/a1;
		printf("Case #%d:\n",i+1);
		printf("x = %.4f\n",x);
		printf("y = %.4f\n",y);	
		x=0;
		y=0;
	}
	return 0;
}
