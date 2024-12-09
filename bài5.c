#include <stdio.h>

int soNguyenTo();

int main(){
	int n;
	for(int i=0;i<2;i++){
	printf("hay nhap mot so nguyen to ");
	scanf("%d",&n);
	if (soNguyenTo(n)){
	printf("la so nguyen to \n");
}else{

	printf("khong phai la so nguyen \n");
}

}
	return 0;
}

int soNguyenTo(int prime){

int i=2 ,TF=1;
if (prime < i){
	TF=0;
	return TF;	
}
while(i<prime){
	if(prime%i==0){
		TF=0;
		return TF;
	}
	i++;
}
return TF;
}


