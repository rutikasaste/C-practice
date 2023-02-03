/*Wild Pointer :-
.wild Pointer is Null Pointer
.When pointer is initialize equal to zero that pointer is called null pointer
*/
#include<stdio.h>
void main()
{
    int x = 10;
    int *iptr = 0; // null pointer
    iptr = &x;
    printf("%d\n", *iptr);

    // replacing the value
    int arr[] = {10, 20, 30, 40};
    int *iptr1 = &(arr[0]);
    printf("%d\n", *iptr1);
    iptr1++;
    *iptr1 = 70;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}
