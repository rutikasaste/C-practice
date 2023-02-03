/*Void Pointer -
    .Void Pointer is a Generic Pointer
    .A void pointer can hold address of any data type 
    .Size Of Void Pointer is 1 Byte
    . We can't type cast to void pointer like *vptr it gives error 
*/
#include<stdio.h>
void main(){
    int x =10;
    int *iptr = &x;
    void *vptr = &x;
    printf("%p\n",iptr);
    printf("%p\n",vptr);
    printf("%d\n",*iptr);
    
    //The Way to type cast void pointer
    printf("%d\n",*((int*)vptr));

}
