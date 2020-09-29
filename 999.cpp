#include<stdio.h>

int main(){
	int n;
	float t;
	for(int i=0; i<3; i++){
		scanf("%f",&t);
		n=t;
		if(n%111==0){
			printf("%.1f...\n",t/1100);
		}
		else{
			printf("%.3f...\n",t/1000);
		}
	}
	return 0;
}
