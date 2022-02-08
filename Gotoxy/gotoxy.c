#include <stdio.h>
#include <windows.h>
void gotoxy (int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()

 {
     gotoxy(25,5);
    printf("Hello world");
 }



