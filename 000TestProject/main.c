#include <stdio.h>

//int main(void)
//{
//	printf("Helloworld\n");
//	printf("press 'Enter to exit this application \n");
//	getchar();
//	return 0;
//}


int a;
int main(){
    a=24;
    {
        int myvar=22;
        printf("01 myvar = %d \n",myvar);
        printf("01 a = %d\n",a);
    }
    int myvar;
    myvar =myvar+10;
    printf("02 myvar = %d\n",myvar);
    return 0;
}


