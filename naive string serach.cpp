#include <stdio.h>
#include <string.h>

int main(){
	char t[1000001],p[10001];
	int Lt=0,Lp=0,j=0;
	int found;
	scanf("%s",t);
	scanf("%s",p);
	Lt=strlen(t);
	Lp=strlen(p);
	for(int i=0;i+Lp-1<Lt;i++){
		found=1;
		for(int j=0;j<Lp;j++){
			if(t[i+j]!=p[j]){
				found = 0;
				break;
			}
		}
		if (found==1){
			printf("%d\n",i);
		}
	}
}
