#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("\tPyramid\n");
    for(x=0; x<=4; x++)
    {
        for(y=0; y<=x; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }
    for(x=3; x>=0; x--)
    {
        for(y=0; y<=x; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }
}
