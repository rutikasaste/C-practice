/*Pointer is a Variable that stores the memory address of another variable .
.Ponter contains 8 bit memory size
&x =referencing of pointer
*ptr =Deferencing of pointer
*/

#include <stdio.h>
void main()
{
   // Basic initialization of pointer
   int a = 10;
   int *ptr = &a;
   printf("%d\n", *ptr);
   printf("%p\n", ptr);

   // Make pointer of different data types
   double b = 30.50;
   double *ptr1 = &b;
   char c = 'A';
   char *ptr2 = &c;
   printf("%lf\n", *ptr1);
   printf("%c\n", *ptr2);

   // Operations on Pointer
   /*Addition of pointer:-
   1)Pointer + integer  - valid
   2)  *Pointer  + *pointer   - valid
   3) pointer + pointer - invalid
*/

   int d = 10;
   int e = 20;
   int *ptr3 = &d;
   int *ptr4 = &e;

//Addition Of *pointer + *pointer 
   printf("%d\n", *ptr3 + *ptr4); // It increments value at run time
   
//Addition Of Pointer + integer
   printf("%p\n", (ptr3 + 1)); // gives address of e
   printf("%d\n", *(ptr3 + 1));  // new_address= current_address + (number * size_of(data type))

//Addition Of pointer + pointer
   // printf("%d\n",ptr3 + ptr4); --It gives error we can't print the addition of address

//Substraction Of two Pointer
   printf("%d\n", ptr3 - ptr4);// New Address = Substraction of two address /SizeOf(ptr)  
   int x = ptr3 - ptr4;
   printf("%d\n",x);

//Multiplication of two Pointer are not valid ..... Only Substraction is allowed in pointer

/*---------------------------------------------------------------------------------------------------*/

/*Pointer for Integer Array
*/
int arr[] ={10,20,30,40};
int *ptr5 = &arr[1];
printf("%d\n",*ptr5);
printf("%d\n",*(ptr5+2));     //Addition Of two pointers
int *ptr6 = &arr[2];
printf("%d\n",ptr6 - ptr5);

//Increment to pointer
printf("%d\n",*(ptr5++)); //20
printf("%d\n",*(++ptr5)); //40

printf("%d\n ",((*ptr5)++)); //40
printf("%d\n ",((*ptr5)++));//41


}
