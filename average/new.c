#include<stdio.h>

int main(void){
	float num1,num2,num3;
	float avg;

	printf("Enter the 3 numbers: \n");
	fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);

	avg=(num1+num2+num3)/3;
	printf("the average of the numbers is %f \n",avg);

	getchar();
}


int main(){
	char c1,c2,c3,c4,c5;

	printf("Enter the characters: ");
	fflush(stdout);
	scanf("%c %c %c %c %c",&c1,&c2,&c3,&c4,&c5);

	printf("\n the ASCII values are :%d %d %d %d %d ",c1,c2,c3,c4,c5);
}


int main(void){
	double charge,chargeE,electrons;


	printf("Enter the charge: ");
	fflush(stdout);
	scanf("%lf",&charge );
	printf("\n Enter the charge of an electron: ");
	fflush(stdout);
	scanf("%le",&chargeE );

	electrons=(charge/chargeE)* -1;
	printf("\ntotal num of electrons : %le",electrons);
	printf("\ntotal num of electrons : %lf",electrons);
	return 0;
}
