#include <stdio.h>

int sumAB(int num1,int num2);

int main(){
	int a,b;
	printf("vui long nhap vao 2 so: ");
	scanf("%d %d",&a,&b);
	printf("tong cua 2 so nguyen %d va %d la %d",a,b,sumAB(a,b));
	return 0;
}
int sumAB(int num1,int num2){
	return num1+num2;
}
