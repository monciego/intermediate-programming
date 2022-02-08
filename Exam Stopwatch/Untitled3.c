#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y)
{
    COORD c;
    c. X = x;
    c. Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void main()
{
    int start, interval, end, timer;
    printf("Start Time: ");
    scanf("%d",&start);
    printf("End Time: ");
    scanf("%d",&end);
    printf("Interval: ");
    scanf("%d",&interval);

    if (start<=end)
        for (start = start, end = end; start<=end; start=start+interval)
    {
        gotoxy (2,3);
        printf("Timer: %d ",start);
        Sleep(600);

    }
    else
    {
       for (start = start, end = end; start >=end; start = start - interval)
    {
        gotoxy (2,3);
        printf("Timer: %d ",start);
        Sleep (600);

    }
    }}
