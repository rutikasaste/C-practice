/*Malloc():-
.malloc() i.e Memory Allocation is used to dynamically allocate a single large block of memory with the specified size 
. It allocates a menory  at Heap Section
.Return type of Malloc is Void Pointer where void pointer stores address of any data type 
.We use #include<stdlib.h> Header file for malloc
*/
#include<stdio.h>
#include<stdlib.h>      //Header file for malloc 
/*We can use prototype in place of header file
    prototype for the malloc [void* malloc(size_t);]
*/
void fun(){
    //Declaration of malloc ;
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 50;
    printf("%d\n",*ptr);
}

//Code for keep two address of two different Variables in heap section using malloc 
int mallocAdd(){
    int *ptr1 =(int*)malloc(sizeof(int));
    int *ptr2 =(int*)malloc(sizeof(int));
    *ptr1=10;
    *ptr2 =20;
    return *ptr1+*ptr2;
}
void main(){
    fun();
    int x =mallocAdd();
    printf("%d\n",x);
}
