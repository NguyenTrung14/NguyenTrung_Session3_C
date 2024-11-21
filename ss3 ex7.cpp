#include<stdio.h>
int main(){
	int a;
	printf("Moi ban nhap so nguyen co 4 chu so : ");
	scanf("%d", &a);
	if(a>999 && a<10000){
	int tong = (a / 1000) + (a % 1000 / 100) + (a % 100 / 10) + (a % 10);
	printf("Tong cac chu so la : %d",tong);
}
	return 0;
}
