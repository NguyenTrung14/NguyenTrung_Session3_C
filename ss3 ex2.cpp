#include<stdio.h>
int main(){
	float a;
	printf("Moi ban nhap nhiet do theo do Celsius : ");
	scanf("%f", &a);
	float b = (a * 9 / 5) + 32;
	printf("Gia tri nhiet do tu C sang F la : %.2f",b);
	return 0;
}
