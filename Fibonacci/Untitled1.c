#include<stdio.h>
void main()
{
    int a, b, c, i, n;
    a=1;
    b=1;
    printf("Enter the Value:");
    scanf("%d ",&n);
    printf("Output: ");
    printf("%d %d ",a,b);

    for(i=2; i<=n; i++)
    {
       c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
    }
}
