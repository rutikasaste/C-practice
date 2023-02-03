/*Dangling Pointer occurs when a pointer pointing to a variable goes out of scope
or when an object/variable's memory gets deallocated.
*/
#include <stdio.h>
int a = 10;
int b=20;
int *iptr = &b;
void fun(){
    int x=30;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%p\n",iptr);
    printf("%d\n",*iptr);
}
void main()
{
    int y=40;
    printf("%d\n",a);
    printf("%d\n",b);
    fun();
    printf("%d",*iptr);  //Dangling Pointer
}
