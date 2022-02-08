#include <stdio.h>
#include <conio.h>

void increase (void* data, int size)
{
    switch (size)
    {
    case sizeof(char) : (*((char*)data))++; break;
    case sizeof(int) : (*((int*)data))++; break;
    }
}

void main()
{
    char a = 'x';
    int b = 1602;
    increase (&a,sizeof(a));
    increase (&b,sizeof(b));
    printf("%c,%d\n",a,b);
    getche();
}
