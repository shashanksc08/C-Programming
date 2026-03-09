#include <stdio.h>

// void _swap(int a,int b);
// void swap(int* a,int* b);

// int main() {
//     int x=3,y=6;
//     printf("Before using pointers \n");
//     _swap(x,y);
//     printf("x=%d & y=%d \n",x,y);
    
    
//     printf("------------------------\n");
    
//     printf("after using pointers \n");
//     swap(&x,&y);
//     printf("x=%d & y=%d \n",x,y);
//     return 0;
// }

// void _swap(int a,int b){
//     int t=a;
//     a=b;
//     b=t;
//     printf("a=%d b=%d \n",a,b);
// }

// void swap(int* a,int* b)
// {
//     int t=*a;
//     *a=*b;
//     *b=t;
//     printf("a=%d b=%d \n",*a,*b);
// }


// int main(){
//     char str=100;
//     printf("%p\n",&str);
//     char * ptr=&str;
//     printf("%d\n",ptr);
//     return 0;
// }

// int main(void){
//     int m=29;
//     printf("Address of m is %p\n",&m);
//     printf("value of m is %d\n",m);
    
//     int* ab=&m;
    
//     printf("Address of pointer ab is %p\n",ab);
//     printf(" value ab is %d\n",*ab);
    
//     m=34;
    
//     printf("Address of pointer ab is %p\n",ab);
//     printf("value ab is %d\n",*ab);
    
//     *ab=7;
    
//     printf("Address of pointer m is %p\n",&m);
//     printf("value m is %d\n",m);
    
// }


// int main(void){
//     int m=300;
//     float fx=300.6006;
//     char cht='z';
    
//     int* pt1=&m;
//     float* pt2=&fx;
//     char* pt3=&cht;
    
//     printf("address of m is, %p\n",&m);
//     printf("address of fx is, %p\n",&fx);
//     printf("address of cht is, %p\n",&cht);
    
//     printf("value at address of m is, %d\n",*&m);
//     printf("value at address of fx is, %f\n",*&fx);
//     printf("value at address of cht is, %c\n",*&cht);
    
//     printf("address of m is, %p\n",pt1);
//     printf("address of fx is, %p\n",pt2);
//     printf("address of cht is, %p\n",pt3);
    
//     printf("value at address of m is, %d\n",*pt1);
//     printf("value at address of fx is, %f\n",*pt2);
//     printf("value at address of cht is, %c\n",*pt3);
// }


// int main(void){
    // int a,b,sum;
    // int *p1=&a,*p2=&b;
    // printf("Enter the num 1 : ");
    // scanf("%d",&a);
    // printf("\nEnter the num 2 : ");
    // scanf("%d",&b);
    // sum=*p1+*p2;
    // printf("the sum is %d",sum);
    // printf("the sum of %d and %d is %d",*p1,*p2,sum);
    
// }

// int add(int*,int*);
// int main(void){
//     int a,b,sum;
    
//     printf("Enter the num 1 : ");
//     scanf("%d",&a);
//     printf("\nEnter the num 2 : ");
//     scanf("%d",&b);
    
//     sum=add(&a,&b);
//     printf("the sum of %d and %d is %d",a,b,sum);  
//     return 0;
// }
// int add(int*n1,int*n2){
//     int res;
//     res=*n1+*n2;
//     return res;
// }



