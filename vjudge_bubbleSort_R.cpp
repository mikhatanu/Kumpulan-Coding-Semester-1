#include <stdio.h>

int main(){
    int panjang=0,a[100000];
    int n=0,t,temp,flag=0;
    int j,k;
    bool swapped;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		for(int k=0;k<n;k++){
			scanf("%d",&a[k]);
			panjang++;
		}
		do{
		swapped=false;
        for(j = 1;j<panjang-1;j++){
        	/* if this pair is out of order */			
            if (a[j-1] > a[j] ){
              	 /* swap them and remember something changed */
				   temp=a[j-1];
                   a[j-1]=a[j];
                   a[j]=temp;
                   flag++;
                   swapped=true;
				}
		}
		}while(swapped!=false);
	printf("%d\n",flag);
	}
    
}
