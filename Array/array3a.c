#include <stdio.h>

int main()
{
int x[3][4];
int i, j, k;

printf("Enter your twelve favorite numbers:\n");
for(i = 0 ; i < 3; i++)
{
for(j = 0; j < 4; j++)
{
scanf("%d ", &x[i][j]);
}
}
printf("This is the list of even number!\n");
for(i=0; i < 3; i++)
{
for(j=0; j < 4 ; j++)
{
k=x[i][j]%2;
if (k==0)
{
printf("%d ",x[i][j]);
}
}
}
return 0;
}

