#include <Stdio.h>
#include <windows.h>

void main()
{
    int x;
    x=0;
    do
    {
        printf("%c ",x);
        Sleep(100);
        x++;

    }
    while(x<=256);


}
