#include<stdio.h>
int main(){
	float a, b;
	printf("Moi ban nhap do dai canh tam giac : ");
	scanf("%f", &a);
	printf("Moi ban nhap chieu cao tam giac : ");
	scanf("%f", &b);
	float dientich = (a * b) / 2;
	printf("Dien tich tam giac la : %.2f",dientich);
	return 0;
}
