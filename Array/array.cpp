//accepts user's inputs in an array variable display the elements
//of the array in specific index.

#include<stdio.h>

int main()
{
    int x[5], y;
    //accepts user input save in array variable
    for (y=0 ; y<5 ; y++)
    {
        printf("Number %d: ", y+1);
        scanf("%d",&x[y]);
    }
    //display the content of array
    for (y=0 ; y <5 ;y++)
    {
        printf("\nIndex [%d] = %d",y, x[y]);
    }
    return 0;

}
