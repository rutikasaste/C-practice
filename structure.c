/*Structure:-
    Structure is a user defined data type that can be used to group items of possibly different types into a single type .
    In c using # pragma pack(1) we avoid memory loss
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct movie
{
    char mName[10];
    int noOfTick;
    float price;
} obj1 = {"Kantara", 2, 300.00};
void main()
{
    struct movie obj2 = {"Drishyam2", 2, 450.50};
    printf("%ld\n", sizeof(obj2)); // Size of Structure

    // Assign the values to fields of structure
    struct movie obj3;
    strcpy(obj3.mName, "Tiger Zinda hai"); // Method to create string object
    obj3.noOfTick = 7;
    obj3.price = 1250.00;

    // Take Input from user
    struct movie obj4;
    printf("Enter Movie Name\n");
    gets(obj4.mName);
    printf("Enter no Of Tickets\n");
    scanf("%d", &obj4.noOfTick);
    printf("Enter no Of Ticket price\n");
    scanf("%f", &obj4.price);

    // Object initialization of structure using malloc
    struct movie *ptr = (struct movie *)malloc(sizeof(struct movie));
    strcpy((*ptr).mName, "Genius");
    (*ptr).noOfTick = 4;
    ptr->price = 400;

    // ACCESS Obj1;
    printf("%s\n", obj1.mName);
    printf("%d\n", obj1.noOfTick);
    printf("%f\n", obj1.price);

    // Access obj2;
    printf("%s\n", obj2.mName);
    printf("%d\n", obj2.noOfTick);
    printf("%f\n", obj2.price);

    // Access obj3;
    printf("%s\n", obj3.mName);
    printf("%d\n", obj3.noOfTick);
    printf("%f\n", obj3.price);

    // Access obj4;
    printf("%s\n", obj4.mName);
    printf("%d\n", obj4.noOfTick);
    printf("%f\n", obj4.price);

    // Access ptr object ;
    printf("%s\n", (*ptr).mName);
    printf("%d\n", (*ptr).noOfTick);
    printf("%f\n", ptr->price);

    /*New Topic:-
    Pointer to a Structure*/
    struct movie *sptr = &obj1;
    printf("%s\n", (*sptr).mName);
    printf("%d\n", (*sptr).noOfTick);
    printf("%f\n", sptr->price);

    struct movie *sptr1 = &obj2;
    printf("%s\n", (*sptr1).mName);
    printf("%d\n", (*sptr1).noOfTick);
    printf("%f\n", sptr1->price);

    /*Array of structure*/
    struct movie arr[3] = {obj2, obj3, obj4};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i].mName);
        printf("%d\n", arr[i].noOfTick);
        printf("%f\n", arr[i].price);
    }
}
