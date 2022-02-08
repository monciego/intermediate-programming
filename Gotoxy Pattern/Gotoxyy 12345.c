#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()
{
    int x, y;
    //Pattern Number 1
    gotoxy(1,1); printf("Pattern Number 1");
    for(x=1,y=1 ; x<=5 ; x++,y++)
    {
        gotoxy(x+6,y+1); printf("*");
    }
    //Pattern Number 2
    gotoxy(25,1); printf("Pattern Number 2");
    for(x=1,y=7; x<=5 ; x++, y--)
    {
        gotoxy(x+30,y-1); printf("*");
    }
    //Pattern Number 3
    gotoxy(1,8); printf("Pattern Number 3");
    for(x=1 ; x<=7 ; x++)
    {
        gotoxy(x+6,9); printf("*");
        gotoxy(x+6,15); printf("*");
    }
    for(x=1,y=1 ; x<=6 ; x++,y++)
    {
        gotoxy(x+7,y+9); printf("*");
    }
    for(x=1,y=15; x<=6 ; x++, y--)
    {
        gotoxy(x+7,y-1); printf("*");
    }
    //Pattern Number 4
    gotoxy(25,8); printf("Pattern Number 4");
    for(x=1 ; x<=9 ; x++)
    {
        gotoxy(30+x,9); printf("*");
        gotoxy(30+x,10); printf("*");
        gotoxy(30+x,14); printf("*");
        gotoxy(30+x,15); printf("*");
    }
    for(x=1 ; x<=3 ; x++)
    {
        gotoxy(33+x,11); printf("*");
        gotoxy(33+x,12); printf("*");
        gotoxy(33+x,13); printf("*");
    }
    //Pattern Number 5
    gotoxy(1,17); printf("Pattern Number 5");
    for(x=1 ; x<=9 ; x++)
    {
        gotoxy(x+6,18); printf("*");
        gotoxy(x+6,19); printf("*");
        gotoxy(x+6,21); printf("*");
        gotoxy(x+6,22); printf("*");
    }
    for(x=1 ; x<=3 ; x++)
    {
        gotoxy(x+6,20); printf("*");
        gotoxy(x+12,20); printf("*");
    }
    gotoxy(10,20);printf("PSU");
}
