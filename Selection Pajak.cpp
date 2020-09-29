#include <stdio.h>

int main(){
	unsigned long int penghasilan,istri,anak,hasil,pajak1,pajak2,pajak3,pajak4;
	istri<=1; anak<=3;
	printf("Masukkan jumlah penghasilan per bulan:");
	scanf("%d",&penghasilan);
	printf("Masukkan jumlah istri:");
	scanf("%d",&istri);
	printf("Masukkan jumlah anak:");
	scanf("%d",&anak);
	penghasilan=penghasilan*12;
	hasil=penghasilan-((4500000*istri)+(4500000*anak));
	if(hasil<=50000000){
		pajak1=0.05*hasil;
		printf("Pajak anda adalah: %d\n",pajak1);
		printf("Penghasilan bersih anda adalah: %d\n",penghasilan-pajak1);
	};
	if(hasil>=50000000){
		pajak1=0.05*50000000;
		hasil=hasil-50000000;
		if(hasil<=250000000){
			pajak2=0.15*hasil;
			printf("Pajak anda adalah: %d\n",pajak1+pajak2);
			printf("Penghasilan bersih anda adalah: %d\n",penghasilan-(pajak1+pajak2));
		}
		if(hasil>=250000001){
			pajak2=0.15*250000000;
			hasil=hasil-250000000;
			if(hasil>=500000000){
				pajak3=0.25*500000000;
				hasil=hasil-500000000;
				pajak4=0.3*hasil;
				printf("Pajak anda adalah: %d\n",pajak1+pajak2+pajak3+pajak4);
				printf("Penghasilan bersih anda adalah: %d\n",penghasilan-(pajak1+pajak2+pajak3+pajak4));
			}else{
			pajak3=0.25*hasil;
			printf("Pajak anda adalah: %d\n",pajak1+pajak2+pajak3);
			printf("Penghasilan bersih anda adalah: %d\n",penghasilan-(pajak1+pajak2+pajak3));			
			}
		}
	};
	return 0;
}
	
	
	
	


