/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void _swap(int a,int b);
void swap(int* a,int* b);

int main() {
    int x=3,y=6;
    printf("Before using pointers \n");
    _swap(x,y);
    printf("x=%d & y=%d \n",x,y);
    
    
    printf("------------------------\n");
    
    printf("after using pointers \n");
    swap(&x,&y);
    printf("x=%d & y=%d \n",x,y);
    return 0;
}

void _swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d b=%d \n",a,b);
}

void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d b=%d \n",*a,*b);
}
