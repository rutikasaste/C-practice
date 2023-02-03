/*When we require multiple pointers in a C program, we create an array of multiple pointers and use it in the program.
We do the same for all the other data types in the C program.*/
#include <stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int *arr1[3] = {&a, &b, &c};
    printf("%p\n", arr1[0]);
    printf("%p\n", arr1[1]);
    printf("%p\n", arr1[2]);

    // dereferencing that pointer
    printf("%d\n", *(arr1[0]));
    printf("%d\n", *(arr1[1]));
    printf("%d\n", *(arr1[2]));

    /*_______________________________________________________________________________________________________________________________*/

    int x = 10;
    char ch = 'A';
    double d = 20.85;
    // array of Void Pointer (Array of void pointer is stores address of different data types)
    void *arr[3] = {&x, &ch, &d};
    printf("%p\n", arr[0]);
    printf("%p\n", arr[1]);
    printf("%p\n", arr[2]);

    // dereferencing that pointer
    printf("%d\n", *(int *)(arr[0]));
    printf("%c\n", *(char *)(arr[1]));
    printf("%lf\n", *(double *)(arr[2]));

    /*__________________________________________________________________________________________________________________________*/

    //  array of pointer of character array
    char arr2[3] = {'A', 'B', 'C'};
    char arr3[3] = {'E', 'F', 'G'};
    char arr4[3] = {'I', 'J', 'K'};
    char *cparr[3] = {arr2, arr3, arr4};
    printf("%ld\n", sizeof(cparr)); // 24
    cparr[0] = arr2 + 1;
    cparr[1] = arr3 + 2;
    cparr[2] = arr4;

    printf("%c\n", *(cparr[0]));
    printf("%c\n", *(cparr[1]));
    printf("%c\n", *(cparr[2]));

    // Array of pointer of integer
    int arr5[3] = {10, 20, 30};
    int arr6[3] = {40, 50, 60};
    int *iptr[2] = {arr5, arr6};

    printf("%d\n", *(iptr[0]));
    printf("%d\n", *(iptr[1]));

    /*______________________________________________________________________________________________________________________*/

    /*POINTER TO POINTER (DOUBLE POINTER)
pointer to store the address of another pointer. Such pointer is known as a double pointer (pointer to pointer).
The first pointer is used to store the address of a variable whereas the second pointer is used to
store the address of the first pointer*/

    int j = 30;
    int *ptr1 = &j;
    int *ptr2 = ptr1;
    int **ptr3 = &ptr1; // double pointer

    printf("%d\n", j);
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    printf("%d\n", **ptr3);

    /*______________________________________________________________________________________________________________________________*/

    /*POINTER TO AN ARRAY:-
     */
    int parr[3] = {10, 20, 30};
    int *ptr5 = parr;
    int *ptr6 = &parr[2];
    int(*ptr7)[3] = &parr; // stores address of full array

    printf("%d\n", *ptr5);
    printf("%d\n", *ptr6);
    // printf("%d\n",*ptr7); it gives error bcoz *ptr always give address
    printf("%p\n", *ptr7);
    printf("%d\n", **ptr7);
    // Increment value of pointer of an array
    printf("%d\n", *(*ptr7 + 2));

    // similar for character array
    char carr[3] = {'A', 'B', 'C'};
    char (*cptr)[3]=&carr;
    printf("%c\n", **cptr);
    printf("%c\n", *(*cptr + 2));

}
