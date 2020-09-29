#include <stdio.h>

int h,a[505000];



void maxHeapify(int i){
	int l=2*i,r=(2*i)+1,largest,temp;
	if(l<=h && a[l]>a[i]){
		largest=l;
	}else{
		largest=i;
	}
	if(r<=h && a[r]>a[largest]){
		largest=r;
	}
	if(largest!=i){
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;	
		maxHeapify(largest);
	}
}

void buildMaxHeap(){
	int i;
	for(i=h/2;i>1;i--){
		maxHeapify(i);	
	}
}

int main(){
	scanf("%d",&h);
//	for(int k=0;k<505000;k++){
//	a[k]=0;
//}
	for(int i=0;i<h;i++){
		scanf("%d",&a[i]);
	}
	buildMaxHeap();
	for(int i=0;i<h;i++){
		printf("%d ",a[i]);
	}
}
