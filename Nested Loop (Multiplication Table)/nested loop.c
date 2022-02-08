#include <Stdio.h>

void main()
{
    int i, j;
    printf("\t\tMultiplication Table\n");
    for(i=1 ; i<=10 ; i++)
    {
        for(j=1 ; j<=10 ; j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }


}
