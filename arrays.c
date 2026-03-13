// #include <stdio.h>

// int main(void){
//     float prices[3];
//     printf("Enter the price of 3 items : ");
//     scanf("%f%f%f",&prices[0],&prices[1],&prices[2]);

//     printf("The price of item 1 is : %f\n", prices[0]+.18*prices[0]);
//     printf("The price of item 2 is : %f\n", prices[2]+.18*prices[2]);
//     printf("The price of item 3 is : %f\n", prices[3]+.18*prices[3]);
//     return 0;

// }



// int main(void){
//     int n;
    // int arr[n];
    // printf("Enter the no of elements : ");
    // scanf("%d",&n);
    
    // printf("Element 0:\n");
    // scanf("%d",&arr[0]);
    // printf("Element 1:\n");
    // scanf("%d",&arr[1]);
    // printf("Element 2:\n");
    // scanf("%d",&arr[2]);
    // printf("Element 3:\n");
    // scanf("%d",&arr[3]);
    // printf("Element 4:\n");
    // scanf("%d",&arr[4]);
    
    

    // printf("Element 0: %d\n", *&arr[0]);
    // printf("Element 1: %d\n", *&arr[1]);
    // printf("Element 2: %d\n",*&arr[2] );
    // printf("Element 3: %d\n",*&arr[3]);
    // printf("Element 4: %d\n", *&arr[4]);
    // return 0;
// }


// int main(void){
//     int n;
//     printf("Enter the no of elements : \n");
//     scanf("%d",&n);
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         printf("Enter the element\n");
//         scanf("%d",arr+i);
//     }
//     for(int i=0;i<n;i++){
//         printf("Element %d : %d\n",i,*(arr+i));
//     }
//     return 0;
// }


// void reverse(int arr[],int n);
// void printarr(int arr[],int n);
// int main(void){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     reverse(arr,n);
//     printarr(arr,n);
//     return 0;
// }

// void reverse(int arr[],int n){
//     int i;
//     for (i=0;i<n/2;i++){
//         int fv=arr[i],lv=arr[n-1-i];
//         arr[i]=lv;
//         arr[n-i-1]=fv;
//     }
// }
// void printarr(int arr[],int n){
//     int i;
//     for (i=0;i<n;i++){
//         printf("arr[%d]=%d\n",i,arr[i]);
//     }
// }


// int main(void){
//     int n;
//     printf("Enter the number of fibo numbers:\t");
//     scanf("%d",&n);
    
//     int fibo[n];
//     fibo[0]=0;
//     fibo[1]=1;
    
//     for (int i=2;i<n;i++){
//         fibo[i]=fibo[i-1]+fibo[i-2];
//     }
//     for (int j=0;j<n;j++){
//         printf("%d\t",fibo[j]);
//     }
    
//     return 0;
// }


// int main(void){
//     int arr[10];
//     for (int i=0;i<10;i++){
//         printf("Enter the number:\t");
//         scanf("%d",&arr[i]);
//         printf("\n");
//     }
//     for (int i=0;i<10;i++){
//         printf("%d\t",*(arr+i));
//     }
//     return 0;
// }



// int main(void){
//     int n,i,sum=0;
//     printf("Enter the number of elements: \t");
//     scanf("%d",&n);
//     int arr[n];
//     for (i=0;i<n;i++){
//         printf("element %d: \t",i);
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<n;i++){
//          sum=sum+arr[i];
//     }
//     printf("\nsum is %d",sum);
    
    
//     return 0;
// }



// int main(void){
//     int n,i,dup=0;
//     printf("Enter the number of elements: \t");
//     scanf("%d",&n);
//     int arr[n];
//     for (i=0;i<n;i++){
//         // printf("element %d: \t",i);
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<n;i++){
//          for (int j=i+1;j<n;j++){
//              if (arr[i]==arr[j]){
//                  dup++;
//                  break;
//              }
//          } 
//     }
//     printf("\nno of duplicates are is %d",dup);
//     return 0;
// }



// int main(void){
//     int n,i;
//     printf("Enter the number of elements: \n");
//     scanf("%d",&n);
//     int arr[n];
//     for (i=0;i<n;i++){
//         // printf("element %d: \t",i);
//         scanf("%d",&arr[i]);
//     }
//     for (i=0;i<n;i++){
//         int dup=0;
//          for (int j=0;j<n;j++){
//              if (i!=j){
//                  if (arr[i]==arr[j]){
//                      dup++;
//                  }
//              }
//          }
//          if( dup==0){
//                  printf("%d\t",arr[i]); 
//              }
//     }    
//     return 0;
// }


// int main(void){
//     int n,i,j,t,temp;
//     printf("Enter the number of elements: \n");
//     scanf("%d",&n);
//     t=2*n;
//     int arr1[n],arr2[n],arr3[t];
//     for (i=0;i<n;i++){
//         printf("element %d: \n",i);
//         scanf("%d",&arr1[i]);
//     }
//     for (i=0;i<n;i++){
//         printf("element %d: \n",i);
//         scanf("%d",&arr2[i]);
//     }
//     for (i=0;i<n;i++){
//         arr3[i]=arr1[i];
//     }
//     for (j=0;j<n;j++){
//         arr3[i]=arr2[j];
//         i++;
//     }
//     for (i=0;i<t;i++){
//         for (j=0;j<t-1;j++){
//             if(arr3[j]<arr3[j+1]){
//                 temp=arr3[j+1];
//                 arr3[j+1]=arr3[j];
//                 arr3[j]=temp;
//             }
//         }
//     }
//     for (i=0;i<t;i++){
//         printf("%d\t",arr3[i]);
//     }
// }


