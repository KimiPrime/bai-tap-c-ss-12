#include <stdio.h>

int perfectNumber();

int main(){
	int num;
	printf("vui long nhap vao so nguyen: ");
	scanf("%d",&num);
	if(num==perfectNumber(num)){
		printf("do la so hoan hao");
	}else{
		printf("do khong phai la so hoan hao");
	}
}
int perfectNumber(int num){
	int i=1,sum=0;
	while(i<num){
		if(num%i==0){
			sum+=i;
		}
		i++;
	}
	return sum;
}
