#include <stdio.h>

int main ()
{
int x;
for (x=1;x<=100;x++)
{
if (x&1)
    printf("%d - odd\n",x);
else
    printf("%d - even\n",x);
}
return 0;
}
