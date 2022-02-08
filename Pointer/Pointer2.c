#include <stdio.h>
#include <conio.h>

void main()
{
    int firstvalue = 5, secondvalue = 5;
    int *p1, *p2;

    p1 = &firstvalue; //p1 = address of firstvalue
    p2 = &secondvalue; //p2 = address of secondvalue
    *p1 = 10;          //val pointed by p1 = 10
    *p2 = *p1;          //val pointed by p2 = val pointed by p1
    p1 = p2;            //p1 = p2 (val of pointer is copied)
    *p1 = 20;           //val pointed by p1 = 20

    printf("First Value is %d\n",firstvalue);
    printf("Second Value is %d\n",secondvalue);
    getche();
}
