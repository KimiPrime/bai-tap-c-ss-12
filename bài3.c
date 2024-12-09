#include <stdio.h>

int factorialN();

int main(){
	int num,factorial;
	printf("vui long nhap vao so nguyen duong: ");
	scanf("%d",&num);
	factorial=factorialN( num);
	printf("giai thua la %d",factorial);
	return 0;
}

int factorialN(int num){
	int i=1,factorial=1;
	while(i<=num){
		factorial*=i;
		i++;
	}
	return factorial;
}
