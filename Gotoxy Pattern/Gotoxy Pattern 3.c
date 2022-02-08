#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void main()
{
    int x,y;
    printf("Pattern Number 3");
    for(x=1,y=1 ; x<=1; x++,y++)
    {
        gotoxy(x+5,y);
        printf("*******");
    }
    for(x=1,y=1 ; x<=6; x++,y++)
    {

        gotoxy(x+5,y);
        printf("*");
    }
     for(x=6,y=1 ; x>=1; x--,y++)
    {
        gotoxy(x+6,y);
        printf("*");
    }
    for(x=1,y=1 ; x<=1; x++,y++)
    {
        gotoxy(x+5,y+6);
        printf("*******");
    }

}



