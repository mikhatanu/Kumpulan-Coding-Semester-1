#include <stdio.h>
#include <math.h>

int main(){
	long long int N,K;
	1<=N<=128;
	1<=K<=30;
	scanf("%d%d", &N,&K);
	N=pow(2,K)*N;
	printf("%lld\n",N);
	return 0;
	}
