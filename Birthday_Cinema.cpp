#include <stdio.h>

int main(){
	int N;
	0<=N<=1000;
	scanf("%d", &N);
	N=(N+3)-((N+3)/3);
	printf("%d\n", N);
	return 0;
}
