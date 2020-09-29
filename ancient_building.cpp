#include<stdio.h>
#include<math.h>
const unsigned int modulo=1000000007;
	long long fast_power(long long dasar, long long pangkat) {
    long long hasil=1;
    while(pangkat>0){

        if(pangkat%2==1){
            hasil=(hasil*dasar)%modulo;
        }
        dasar=(dasar*dasar)%modulo;
        pangkat=pangkat/2;
    }
    return hasil;
}

int main(){
	int t,a,b;
	long long int jumlah;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d %d", &a,&b);
		jumlah=(fast_power(2,a)*fast_power(3,b))%modulo;
		printf("%lld\n",jumlah);
	}
	return 0;
}
