/*2D ARRAY:-
The 2D array is organized as matrices which can be represented as the collection of rows and columns.
*/
#include<stdio.h>
void main(){
    int rows , col;
    int sum=0;
    int sum_d=0;
//Addition Of elements in 2D array
    printf("Enter no of rows nd Columns: ");
    scanf("%d%d",&rows,&col);
    int arr[rows][col];
    printf("Enter array elements:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d\n",&arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    printf("Array elements : \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
   printf("Sum Of Array : %d\n",sum);
   
//Adddition of diagonal elements in 2D array
   printf("Sum of Diagonal Of elements in 2D Array: \n");
   for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        if(i==j){
            sum_d =sum_d + arr[i][j];
        }
    }
   }
   printf("%d\n",sum_d);

//2D Array nd Pointer
int arr2[3][3]={10,20,30,40,50,60,70,80,90};
printf("%d\n",arr[0][1]);
printf("%d\n",arr[1][1]);
printf("%d\n",arr[2][1]);

printf("%p\n",arr);         //gives the address of first element of whole array
printf("%p\n",arr[0]);      //gives the address of first element of first row
printf("%p\n",arr[1]);      //gives the sddress of first elememt of second row

printf("%p\n",&arr[0][1]);      //gives the address of arr[0][1]
printf("%p\n",&arr[1][1]);      //gives the address of arr[1][1]
printf("%p\n",&arr[2][1]);      //gives the address of arr[2][1]
}

/*The method of finding the correct value at arr[i][j]
   The value at arr[i][j]= *(*(arr+i*size of (whole 1D array))+j *sizeof(Data type))

   e.g arr[1][2]=*(*(100+1*12)+2*4)
                =*(120)
                =90
*/
