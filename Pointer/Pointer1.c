#include <Stdio.h>
#include <conio.h>

void main()
{
    int firstvalue, secondvalue;
    int * mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    printf("First Value is %d ",firstvalue);
    printf("\nSecond Value is %d",secondvalue);
    getche();
}
