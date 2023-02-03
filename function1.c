/*FUNCTION:-
Function is a block of code where we write code and call that block of code through main function
Implicit function :-
Explicit Function :- */

#include <stdio.h>

// Call by value

void val(int x)
{
    printf("%d\n", x);
}

// Call by address
void adr(int *arr)
{
    printf("%p\n", arr);
    *arr =50;
}

// Pointer to an array gives arror Bcoz we cannot pass address of complete array [ int(*ptr)[]  ]

// Double Pointer
void dptr(int **ptr)
{
    printf("%d\n", **ptr);
}
void fun(int , int);    //function using multiple inputs
void printEle(int);     //Passing array to a function

//Passing Array to an Function
void printArr1(int *ptr5 ,int arrSize){
    for(int i=0;i<arrSize;i++){             // 1st Method
        printf("%d\n", *(ptr5+i));
    }
}
void printArr2(int arr2[],int arrSize){
    for(int i =0 ;i<arrSize ;i++){          // 2nd Method
        printf("%d\n",arr2[i]);
    }
}

/*________________________________________________Main Function__________________________________________________________________________________*/
void main()
{
    int arr[] = {10, 20, 30, 40};
    val(10);
    adr(arr);
    int *ptra = &arr[1];         
    adr(&arr[1]);
    printf("%d\n",*ptra);       // passing pointer we will able to change value at pointer 

    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    dptr(ptr2);
    dptr(&ptr1);
    fun(10 ,30);

    //1st Method to passing array to function
    int arr2[]={20,30,65,54,80};
    int arrSize = sizeof(arr2)/sizeof(int);
    for(int i=0; i<arrSize ;i++){
        printEle(arr2[i]);
    }
    printArr1(arr2 , arrSize);
    printf("\n");
    printArr2(arr2 ,arrSize);
}

void fun(int x ,int y){
    printf("%d\n",x+y);
}

void printEle(int ele){
    printf("%d\n",ele);
}
