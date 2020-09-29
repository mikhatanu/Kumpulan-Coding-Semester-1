#include <stdio.h>

int main(){

	long long int temp1,temp2,n=0,m=0,a=0;
	scanf("%lld %lld %lld",&n,&m,&a);
	temp1=(n/a)+(n%a!=0);
	temp2=(m/a)+(m%a!=0);
	printf("%lld",temp1*temp2);
	return 0;
}
