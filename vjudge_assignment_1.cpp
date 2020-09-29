#include <stdio.h>

int main(){
	int n,q,num=0, num_check=0,flag=0,arr[105000],arr_check[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		num++;		
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d",&arr_check[i]);
		num_check++;
	}
	for(int j=0;j<num_check;j++){
		for(int i=0;i<num;i++){
			if(arr_check[j]==arr[i]){
				flag++;
				break;
			}else{
				continue;
			}
		}
	}
	printf("%d\n",flag);
	return 0;
}
