#include<stdio.h>
#include<windows.h>
void gotoxy(int x , int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()
{
    int x,y;
    //pattern number 1
    gotoxy(1,1); printf("Pattern Number 1");
    for(x=1,y=2; x<=5; x++,y++)
        {
            gotoxy(x+5,y); printf("*");
        }
    //pattern number 2
    gotoxy(25,1); printf("Pattern Number 2");
    for(x=25,y=2; x>=21; x--,y++)
        {
        gotoxy(x+6,y); printf("*");
        }
    //pattern number 3
    gotoxy(0,10); printf("Pattern Number 3");
    for(x=1,y=11; x<=7; x++,y++)
        {
            gotoxy(x+5,11); printf("*");
            gotoxy(x+5,17); printf("*");
        }
    for(x=1,y=11; x<=6; x++,y++)
        {
            gotoxy(x+5,y); printf("*");
        }
    for(x=6,y=11; x>=1; x--,y++)
        {
            gotoxy(x+6,y); printf("*");
        }
        //pattern number 4
    gotoxy(25,10); printf("Pattern Number 4");
    for(x=1; x<=9; x++)
        {
            gotoxy(31+x,11); printf("*");
            gotoxy(31+x,12); printf("*");
            gotoxy(31+x,16); printf("*");
            gotoxy(31+x,17); printf("*");
        }
    for(x=1; x<=3; x++)
    {
            gotoxy(34+x,13); printf("*");
            gotoxy(34+x,14); printf("*");
            gotoxy(34+x,15); printf("*");
        }
        //pattern number 5
    gotoxy(0,20); printf("Pattern Number 5");
    for(x=1; x<=9; x++)
        {
            gotoxy(x+6,21); printf("*");
            gotoxy(x+6,22); printf("*");
            gotoxy(x+6,24); printf("*");
            gotoxy(x+6,25); printf("*");
        }
    for(x=1; x<=3; x++)
        {
            gotoxy(x+6,23); printf("*");
            gotoxy(x+12,23); printf("*");
        }
    for(x=1; x<=1; x++)
        {
            gotoxy(x+9,23); printf("PSU");
        }


}

