#include <stdio.h>

//void add_nums(int a,int b,int c);
int add_nums(int,int,int);

int main()
{
//	add_nums(22,11,33);
//	add_nums(-11,-33,22);

	int A=21,B=10;
	int res;
	res=add_nums(A,B,100);
	printf("the sum is %d\n",res);
	return 0;
}

//void add_nums(int a,int b,int c){
//	int sum;
//	sum=a+b+c;
//	printf("the sum is %d \n",sum);
//}

int add_nums(int a,int b,int c){
	int sum=a+b+c;
	return sum;
}
