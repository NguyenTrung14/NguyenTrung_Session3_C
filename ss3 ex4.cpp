#include<stdio.h>
int main(){
	float toan, van, anh;
	printf("Moi ban nhap diem toan : ");
	scanf("%f", &toan);
	printf("Moi ban nhap diem van : ");
	scanf("%f", &van);
	printf("Moi ban nhap diem anh : ");
	scanf("%f", &anh);
	float tong = toan + van + anh;
	float trungbinh = tong / 3;
	printf("Tong diem 3 mon la : %.2f\n",tong);
	printf("Diem trung binh 3 mon la : %.2f",trungbinh);
	return 0;
}
