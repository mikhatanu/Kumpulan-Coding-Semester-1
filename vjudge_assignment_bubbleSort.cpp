#include <stdio.h>

int main(){
	int n,t,arr[15000];
	int i,j,temp,flag=0;
	scanf("%d",&t);
	for(int k=0;k<t;k++){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
		for(i=1;i<n;i++){
			for(j=n-1;j>=i;j--){
				if(arr[j-1]>arr[j]){
					temp=arr[j-1];
					arr[j-1]=arr[j];
					arr[j]=temp;
					flag++;
				}
			}
		}
		printf("%d",flag);
	}		
}
