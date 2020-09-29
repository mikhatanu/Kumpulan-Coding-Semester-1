#include <stdio.h>

int main (){
	char nama1[11], nama2[11], nama3[11];
	char telpon1[9], telpon2[9], telpon3[9];
	scanf("%[A-Za-z]%[0-9]%[A-Za-z]%[0-9]%[A-Za-z]%[0-9]",nama1,telpon1,nama2,telpon2,nama3,telpon3);
	printf("%-11s%-s\n", nama1, telpon1);
	printf("%-11s%-s\n", nama2, telpon2);
	printf("%-11s%-s\n", nama3, telpon3);
	return 0;
}

