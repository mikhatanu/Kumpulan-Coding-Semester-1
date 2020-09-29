#include <stdio.h>

int main(){
	int N;
	0<=N<=1000;
	scanf("%d", &N);
	N=N*(N+1)/2;
	printf("%d\n", N);
	return 0;
}
