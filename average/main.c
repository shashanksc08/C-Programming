#include<stdio.h>

int main(void){
	float num1,num2,num3;
	float avg;

	printf("Enter the number: \n");
	fflush(stdout);
	scanf("%f",&num1);
	printf("Enter the number: \n");
	fflush(stdout);
	scanf("%f",&num2);
	printf("Enter the number: \n");
	fflush(stdout);
	scanf("%f",&num3);

	avg=(num1+num2+num3)/3;
	printf("the average of the numbers is %f \n",avg);
}
