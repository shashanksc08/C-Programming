
#include <stdio.h>

int main()
{
    char a1='A';
    char a2='l';
    char a3='P';
    char a4='p';
    char a5='l';
    char a6=':';
    char a7='}';

    unsigned long  address_a1 = ( unsigned long  )&a1;

    printf("Adress of a1 in number = %lu \n",address_a1);
    printf("Adress of a2 = %p \n",&a2);
    printf("Adress of a3 = %p \n",&a3);
    printf("Adress of a4 = %p \n",&a4);
    printf("Adress of a5 = %p \n",&a5);
    printf("Adress of a6 = %p \n",&a6);
    printf("Adress of a7 = %p \n",&a7);

    return 0;
}
