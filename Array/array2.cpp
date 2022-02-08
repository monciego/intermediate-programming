//accepts user's inputs in an array variable display the elements
//of the array in specific index.

#include<stdio.h>

int main()
{
    int x[10], y, z;
    //accepts user input save in array variable
    for (y=0 ; y<10 ; y++)
    {
        printf("Number %d: ", y+1);
        scanf("%d",&x[y]);
    }
    //display the content of array
    for (y=0,z=1 ; y <10 ;y+=2, z+=2)
    {
        printf("\nx[%d] = %d \t x[%d] = %d",y, x[y], z, x[z]);
    }
    return 0;

}
