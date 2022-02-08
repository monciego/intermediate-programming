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
    printf("Pattern Number 4");
    for(x=1,y=1 ; x<=1; x++,y++)
    {
        gotoxy(x+6,y);
        printf("*********");
        gotoxy(x+6,y+1);
        printf("*********");
        gotoxy(x+9,y+2);
        printf("***");
        gotoxy(x+9,y+3);
        printf("***");
        gotoxy(x+9,y+4);
        printf("***");
        gotoxy(x+6,y+5);
        printf("*********");
        gotoxy(x+6,y+6);
        printf("*********");

    }
}
