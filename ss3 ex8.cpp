#include<stdio.h>
int main(){
	int a;
	printf("Moi ban nhap so nguyen co 4 chu so : ");
	scanf("%d", &a);
	if(a>999 && a<10000){
	int b = (a % 10 * 1000) + (a % 100 / 10 * 100) + (a % 1000 / 100 * 10) + (a / 1000);
	printf("So nghich dao la : %d",b);
	}
	return 0;
}
