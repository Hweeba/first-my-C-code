#include<stdio.h>
main(){
	float num1, num2;
	float ave;
	printf("첫번재 수:");
	scanf("%f", &num1);
	printf("두 번째 수:");
	scanf("%f", &num2);
	printf("두수의 합:%.2f \n",num1+num2);
	ave=(num1+num2)/2;
	printf("두수의 합:%.2f", ave);
}

