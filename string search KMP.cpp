#include <stdio.h>
#include <string.h>

void calculate(char *p, int M, int *f){
	int len = 0;
	f[0]=0;
	int i=1;
	while(i<M){
		if (p[i]==p[len]){
			len++;
			f[i]=len;
			i++;
		}else{
			if(len!=0){
				len = f[len-1];
			}else{
				f[i]=0;
				i++;
			}
		}
	}
}

int main(){
	char s[1000001],p[10001];
	int Ls=0,Lp=0;
	scanf("%s",s);
	scanf("%s",p);
	Ls=strlen(s);
	Lp=strlen(p);
	int f[Lp];
	calculate(p,Lp,f);
	
	int i=0;
	int j=0;
	while(i<Ls){
		if(p[j]==s[i]){
			j++;
			i++;
		}
		if(j==Lp){
			printf("%d\n",i-j);
			j=f[j-1];
		}else if(i<Ls&&p[j]!=s[i]){
			if(j!=0){
				j=f[j-1];
			}else{
				i=i+1;
			}
		}
	}
	
}
